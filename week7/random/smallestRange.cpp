//https://leetcode.com/problems/smallest-range-i/
//O(n) time and O(1) space
int smallestRangeI(vector<int>& nums, int k) {
        
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        
        return max(0, maxi-mini-2*k);
        
   }
