//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/

//o-h time and stack space
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
       // if(root==NULL) return NULL;
        
        
        if(root->val<p->val && root->val<q->val)
          return  lowestCommonAncestor(root->right,p,q);
        
        if(root->val>p->val && root->val>q->val)
          return  lowestCommonAncestor(root->left,p,q);
        
        return root;
    }

//o-h t and const s
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        while(true){
            if(root->val<p->val && root->val<q->val)
                root=root->right;
            else if(root->val>p->val && root->val>q->val)
                root=root->left;
            else
            return root;
        }
        
        return NULL;
    }
