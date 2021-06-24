//https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/

//O(logN) time 
int search(vector<int>& nums, int target) {
        
        int m,l=0,r=nums.size()-1;
        
        while(r-l>1){
            m=l+(r-l)/2;
            if(nums[l]<nums[m]){
                if(nums[l]<=target&&nums[m]>target){
                    r=m-1;
                }
                else
                    l=m;
            }
            else{
                if(nums[r]>=target&&nums[m]<target){
                    l=m+1;
                }
                else
                    r=m;
            }
        }
        //cout<<l<<" "<<r;
        
        if(nums[l]==target)
            return l;
        
        if(nums[r]==target)
            return r;
        
           return -1;
    }
