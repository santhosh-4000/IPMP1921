//

//O(n)-t o(1)-s
bool canJump(vector<int>& nums) {
        
        int max_pos=0,cur_pos;
        
        for(int i=0;i<nums.size();i++){
            if(max_pos<i) return false;
            cur_pos=i+nums[i];
            max_pos=max(max_pos, cur_pos);
            
        }
        
        return true;
    }
