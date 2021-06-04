//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/submissions/

//o-n time o-h space
 TreeNode* sortedArrayToBSTUtil(vector<int>& nums, 
                                  int l, int h){
        if(l>h){
            return NULL;
        }
        if(l==h){
            return new TreeNode(nums[l]);
        }
        
        int m=(l+h)/2;
        
        TreeNode* root=new TreeNode(nums[m]);
        
        root->left=sortedArrayToBSTUtil(nums,l,m-1);
        root->right=sortedArrayToBSTUtil(nums,m+1,h);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        
        return sortedArrayToBSTUtil(nums,l,h);
    }
