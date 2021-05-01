//https://leetcode.com/problems/sliding-window-maximum/
//bruteforce takes O(n*k) time and O(1) space
//with deque
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque <int> dq;
        vector<int> ans;
        
      //O(k) as every element is pushed or popped exactly once
        for(int i=0;i<k;i++){
            while(!dq.empty() && nums[dq.back()]<=nums[i])
                dq.pop_back();
            
            dq.push_back(i);   
        } 
        
        ans.push_back(nums[dq.front()]);
        
      //O(n-k) as every element is puhed into and popped from 
      //dequeue exactly once
        for(int i=k;i<nums.size();i++){
            
            while(!dq.empty()&& (i-k)>=dq.front())
                dq.pop_front();
            
            while(!dq.empty() && nums[dq.back()]<=nums[i])
                dq.pop_back();
            
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        } 
        
        return ans;
        
    }
};
