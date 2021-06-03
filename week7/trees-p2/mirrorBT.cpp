//https://leetcode.com/problems/invert-binary-tree/submissions/

//o-n time
TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        TreeNode* lft=invertTree(root->left);
        TreeNode* rt=invertTree(root->right);
        
        root->left=rt;
        root->right=lft;
        
        return root;
    }
