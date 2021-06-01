//https://leetcode.com/problems/binary-tree-right-side-view/submissions/

//right view and iterative
//o-n time o-w space
vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            ans.push_back(q.front()->val);
            while(n--){
                TreeNode* tmp=q.front();
                q.pop();
                
                if(tmp->right)
                    q.push(tmp->right);
                if(tmp->left)
                    q.push(tmp->left);
            }
        }
        
        return ans;
    }

//left view
//recursion
//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
void leftViewUtil(Node *root, vector<int>&ans,
int&maxi,int lvl){
    if(root==NULL) return;
    if(maxi<lvl){
        ans.push_back(root->data);
        maxi=lvl;
    }
    leftViewUtil(root->left,ans,maxi,lvl+1);
    leftViewUtil(root->right,ans,maxi,lvl+1);
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   int maxi=-1;
   leftViewUtil(root,ans,maxi,0);
   return ans;
}
