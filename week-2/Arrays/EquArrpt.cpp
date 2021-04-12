//https://leetcode.com/problems/find-pivot-index/submissions/
int pivotIndex(vector<int>& nums) {
        
        int total=0,leftSum=0,rightSum;
        
        for(auto &i:nums) total+=i;
        int j=0;
        for(auto &i: nums){
            rightSum=total-leftSum-i;
            if(leftSum==rightSum)
                return j;
            j++;leftSum+=i;
        }
        
        return -1;
    }
