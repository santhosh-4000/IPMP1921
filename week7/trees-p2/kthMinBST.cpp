//https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/

//o-n time o-h space
int kthSmallest(TreeNode* root, int& k) {
        
        if(root==NULL)
            return -1;
       
        int tmp=kthSmallest(root->left,k);
        
        if(tmp!=-1)
            return tmp;
        
        if(k==1)
            return root->val;
        
        k--;
        return kthSmallest(root->right,k);
    }
