//https://leetcode.com/problems/wiggle-subsequence/submissions/

//the idea is to find no. of incresing or decreasing substrings +1 orr no. of peaks(min/max) +1
//but there are some base and corner cases
//o-n time o-1 space
int wiggleMaxLength(vector<int>& nums) {
        
        if(nums.size()<2) return nums.size();
        
        int i=0;
        
        while(i<nums.size()-1 && nums[i]==nums[i+1]) i++;
        
        if(i==nums.size()-1) return 1;
        
        int  ans=1;
        
  //o-n
        while(i<nums.size()-1){
            if(nums[i]<=nums[i+1]){
                while((i<nums.size()-1)&&nums[i]<=nums[i+1]){
                    i++;
                }
                ans++;
            }
            
            else{
                while((i<nums.size()-1)&&nums[i]>=nums[i+1]){
                    i++;
                }
                ans++;
            }
        }
        
        return ans;
    }
