//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/

//o-n time and o-h space(stack)
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL) return NULL;
        
        if(root==p||root==q) return root;
        
        TreeNode* lt=lowestCommonAncestor(root->left,p,q);
         TreeNode* rt=lowestCommonAncestor(root->right,p,q);
        
        if(lt&&rt)
            return root;
        
        if(lt) return lt;
        return rt;
   }

//m2: can maintain path vectors for 2 nodes and find last common node

