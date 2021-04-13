//https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/
int longestSubarray(vector<int>& nums, int limit) {
        
        if(nums.size()==1) return 1;
        
        multiset<int> st;
        st.insert(nums[0]);
        
        
        int i=0,j=1,maxlen=1;
        
        for(;j<nums.size();j++){
            st.insert(nums[j]);
            while(*(st.rbegin())-*(st.begin())>limit){
                st.erase(st.find(nums[i]));
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        
        
        return maxlen;
    }
