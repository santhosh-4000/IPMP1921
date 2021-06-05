//https://leetcode.com/problems/sum-of-all-subset-xor-totals/submissions/

//o-2^n time
int subsetXORSumUtil(vector<int>& nums, int i, int cur){
        if(i==nums.size())
            return cur;
        
        return subsetXORSumUtil(nums,i+1,cur)+
            subsetXORSumUtil(nums,i+1,cur^nums[i]);
        
    }
    
    int subsetXORSum(vector<int>& nums) {
        
        return subsetXORSumUtil(nums,0,0);
        
    }
