//https://leetcode.com/problems/shortest-unsorted-continuous-subarray/submissions/

//O(n) time
int findUnsortedSubarray(vector<int>& nums) {
        
        int s=-1,e=-1,n=nums.size();
        
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                s=i-1;
                break;
            }
            
        }
        
        for(int i=1;i<nums.size();i++){
            if(nums[n-i]<nums[n-1-i]){
                e=n-i;
                break;
            }
        }
        
        int mini=INT_MAX, maxi=INT_MIN;
        
        if(s==-1||e==-1) return 0;
        
        for(int i=s;i<=e;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        
        while(s!=0&&nums[s-1]>mini){
            s--;
        }
        while(e!=n-1&&nums[e+1]<maxi){
            e++;
        }
        
        return e-s+1;
    }
