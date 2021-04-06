//https://leetcode.com/problems/next-permutation/submissions/ 

void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1, j;
        int tmp;
        
        
        while(i>0&& nums[i-1]>=nums[i]){
            i--;
        }
        
        if(i==0){
            sort(nums.begin(),nums.end());
        }
        
        else{
            i=i-1;
            tmp=nums[i+1]; j=i+1;
            for(int k=i+2;k<nums.size();k++){
                if(nums[k]<tmp&&nums[k]>nums[i]){
                    tmp=nums[k];   
                    j=k;
                    }
            }
            swap(nums[i],nums[j]);
            sort(nums.begin()+i+1,nums.end());
        }
    }
