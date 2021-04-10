//https://leetcode.com/problems/majority-element/
//Mores voting algo
 int majorityElement(vector<int>& nums) {
        int tmp=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
            if(tmp == nums[i])
                count++;
            else
                count--;
            if(count == 0){
                count=1;
                tmp=nums[i];
            }
        }
        
        return tmp;
    }
