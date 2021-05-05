//https://leetcode.com/problems/contiguous-array/submissions/


//bruteforce - get cummulative sum  like +-1 for 0 and +1 for 1
//for all subarrays
//find  max j-i+1 for cummulative sum 0
//O(n2) time and O(1) space


//hashing
//O(n) tome and space
int findMaxLength(vector<int>& nums) {
        
        //n suns possible may take O(n) space
        unordered_map<int,int> mp;
        
        int sum=0,max_res=0;
        //O(n)
        for(int i=0;i<nums.size();i++){
            if(nums[i]) sum+=1;
            else sum+=-1;
            
            if(sum==0&&max_res<i+1)
            max_res=i+1;
            else if(mp.find(sum)==mp.end())
                mp[sum]=i;
            else 
                max_res=max(max_res, i-mp[sum]);
        }
        
        return max_res;
    }
