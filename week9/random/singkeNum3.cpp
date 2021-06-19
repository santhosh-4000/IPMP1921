//https://leetcode.com/problems/single-number-iii/submissions/

//O(n) time O(1) space
vector<int> singleNumber(vector<int>& nums) {
        
        long xr=0,xr1=0,xr2=0;
        
        for(auto &num: nums){
            xr^=num;
        }
        
        long b=xr&(xr^(xr-1));
        
        for(auto &num: nums){
            if(num&b)
                xr1^=num;
            else
                xr2^=num;
        }
        
        vector<int> ans;
        ans.push_back(xr1);
        ans.push_back(xr2);
        return ans;
    }
