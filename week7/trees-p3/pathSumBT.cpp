//https://leetcode.com/problems/path-sum/submissions/

//o-n time o-h space
 bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        
        targetSum-=root->val;
        if(root->left==NULL&&
          root->right==NULL){
            return targetSum==0;
        }
        
        if(hasPathSum(root->left,targetSum))
            return true;
        return hasPathSum(root->right,targetSum);
    }
