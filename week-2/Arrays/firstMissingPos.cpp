//https://leetcode.com/problems/first-missing-positive/
int segergate(vector<int>& arr){
        int j=0,i;
        for(i=0;i<arr.size();i++){
            if(arr[i]<=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        
        return j;
    }
    
    int firstMissingPositive(vector<int>& nums) {
        int k=segergate(nums);
        
        for(int i=k;i<nums.size();i++){
        if(abs(nums[i])-1<nums.size()-k&&
           nums[abs(nums[i])+k-1]>0
           )
            nums[abs(nums[i])+k-1]=-nums[abs(nums[i])+k-1];
    }
    
    for(int i=k;i<nums.size();i++){
        if(nums[i]>0)
            return i-k+1;
    }
    
    return nums.size()-k+1;
    }
