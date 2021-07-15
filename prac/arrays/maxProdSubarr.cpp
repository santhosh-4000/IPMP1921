//https://leetcode.com/problems/maximum-product-subarray/submissions/

//O(n) time and O(1) SPACE
int maxProduct(vector<int>& nums) {
        
        int res=nums[0];
        int max_so_far=nums[0];
        int min_so_far=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(min_so_far, max_so_far);
            }
            
            min_so_far=min(nums[i], min_so_far*nums[i]);
            
            max_so_far=max(nums[i], max_so_far*nums[i]);
            
            res=max(res, max_so_far);
            
        }
        
        return res;
        
    }
