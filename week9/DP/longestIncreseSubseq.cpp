//https://leetcode.com/problems/longest-increasing-subsequence/submissions/

//O(n2) time O(n) space
int lengthOfLIS(vector<int>& nums) {
        
        vector<int> L(nums.size());
        
        int cur_max=1,total_max=1;
        
        for(int i=0;i<nums.size();i++){
            cur_max=1;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])
                    cur_max=max(cur_max,L[j]+1);
            }
            L[i]=cur_max;
            total_max=max(cur_max,total_max);
        }
        
        return total_max;
    }
