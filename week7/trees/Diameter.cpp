//https://leetcode.com/problems/diameter-of-binary-tree/submissions/

//o-n2 time o-n space
int height(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int d=height(root->left)+height(root->right);//o-n
        
        int l=diameterOfBinaryTree(root->left);//t(n-k-1)
        int r=diameterOfBinaryTree(root->right);//t(k)
        
        return max(d,max(l,r));
    }

//o-n time o-n space stck
int diameterOfBinaryTree(TreeNode* root) {
        int h;
        return diameterOfBinaryTreeUtil(root, h);
    }
    
    int diameterOfBinaryTreeUtil(TreeNode* root, int &height){
        
        if(root==NULL){
            height=0;
            return 0;
        }
        int lh,rh;
        int l=diameterOfBinaryTreeUtil(root->left,lh);
        int r=diameterOfBinaryTreeUtil(root->right,rh);
        
        height=1+max(lh,rh);
        return max(lh+rh,max(l,r));
        
    }
