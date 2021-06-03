//https://leetcode.com/problems/validate-binary-search-tree/submissions/

//o-n time o-h space
bool isValidBSTUtil(TreeNode* root, long &sum){
        
        if(root==NULL) return 1;
        
        
        if(isValidBSTUtil(root->left,sum)&&sum<root->val){
            sum=root->val;
        }
        else
            return 0;
        
        return isValidBSTUtil(root->right,sum);
    }
    
    bool isValidBST(TreeNode* root) {
        long sum=-1e10;
        return isValidBSTUtil(root,sum);
    }

//t and s same as above

 bool isValidBSTUtil(TreeNode* root, long min ,long max){
        if(root==NULL)
            return 1;
        
        if(min>root->val||max<root->val){
            return 0;
        }
        
        return isValidBSTUtil(root->left,min,(long)root->val-1)&&
            isValidBSTUtil(root->right,(long)root->val+1,max);
    }
    
    bool isValidBST(TreeNode* root) {
        return isValidBSTUtil(root,LONG_MIN,LONG_MAX);
    }
