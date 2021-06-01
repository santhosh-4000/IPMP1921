//https://leetcode.com/problems/convert-bst-to-greater-tree/submissions/

//o-n time o-h stack space
void convertBSTUtil(TreeNode* root, int &prev){
        if(root==NULL) return ;
        convertBSTUtil(root->right, prev);
        root->val+=prev;
        prev=root->val;
        convertBSTUtil(root->left, prev);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        int prev=0;
        convertBSTUtil(root,prev);
        return root;
    }
