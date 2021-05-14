//https://leetcode.com/problems/minimum-size-subarray-sum/submissions/

//O(n) time and O(1) space
int minSubArrayLen(int target, vector<int>& nums) {
        
        int mini=INT_MAX,i=0,sum=0,n=nums.size();
        
        //O(n)
        for(int L=0;L<n;L++){
            if(L>0) sum-=nums[L-1];
                
            while(i<n && sum < target){
                sum+=nums[i];
                i++;
            }
            
            if(sum >= target) mini=min(mini, i-L);
            
        }
        
        if(mini==INT_MAX) return 0;
        
        return mini;
        
    }
