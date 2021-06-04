//https://practice.geeksforgeeks.org/problems/ancestors-in-binary-tree/1

//o-n time o-h space
bool AncestorsUtil(struct Node *root, int target, 
    vector<int>& ans){
        if(root==NULL)
        return false;
        
        if(root->data==target){
            return true;
        }
        
        if(AncestorsUtil(root->left,target,ans)||
        AncestorsUtil(root->right,target,ans)){
            ans.push_back(root->data);
            return true;
        }
        
        return false;
    }
    
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int> ans;
         AncestorsUtil(root,target,ans);
         return ans;
    }
