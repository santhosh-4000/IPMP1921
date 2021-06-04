//https://leetcode.com/problems/binary-tree-paths/submissions/

//o-n time if coping srtring is considered o(1)
//o-h stack
void binaryTreePathsUtil(TreeNode* root,string s, vector<string> &ans){
        if(root==NULL) return;
        
        if(root->left==NULL&&
          root->right==NULL){
            s+=to_string(root->val);
            ans.push_back(s);
        }
        
        s+=to_string(root->val);
        s+="->";
        binaryTreePathsUtil(root->left,s,ans);
        binaryTreePathsUtil(root->right,s,ans);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";
        binaryTreePathsUtil(root,s,ans);
        return ans;
    }

