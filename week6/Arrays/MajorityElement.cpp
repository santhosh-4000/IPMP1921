//
//https://leetcode.com/problems/majority-element/submissions/

//mooores voting algo
//we need cur_ele and count variables
//O(n) time and O(1) space
 int majorityElement(vector<int>& nums) {
        
        //Moores' voting algo
        int tmp=nums[0],count=1;
        
        for(int i=0;i<nums.size();i++){
            
            if(tmp==nums[i]){
                count++;
            }
            else{
                count--;
                if(count==0){
                    tmp=nums[i];
                    count=1;
                }
            }
        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==tmp)
                count++;
        }
        
        if(count>nums.size()/2)
            return tmp;
        
        else
            return -1;
        
    }

//brute force O(n2) and O(1)
//sorting and counting ans reporting majority element O(nlogn) and O(1)
//hashing O(n) and O(n)
