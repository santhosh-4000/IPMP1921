//https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> present(nums.size()+1,false);
        
        for(auto &i: nums)
            present[i]=1;
        
        for(int i=0;i<present.size();i++)
            if(present[i] == 0)
                return i;
        
        return -1;
    }
};

//O(1) space

int missingNumber(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums.size())
                continue;
            
            else if(nums[i]>=0 ){
                int tmp=nums[i];
                nums[tmp] *=-1;
                nums[tmp] -=1;
            }
            
            else{
                int tmp=-1-nums[i];
                if(tmp==nums.size())
                continue;
                nums[tmp]*=-1;
                nums[tmp]+=-1;
            }
            
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0)
                return i;
        }
        
        return nums.size();
    }
    
    //from getting total and subtraction from Sum(n);
    //Treating overflow case for above
    //using xor 1 for arr[] and one from 1 to n(range)
    
