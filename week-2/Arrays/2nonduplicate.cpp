//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1
vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i=0;
        
        while(i<nums.size()-1){
            if(nums[i] == nums[i+1])
                i += 2;
            else{
                ans.push_back(nums[i]);
                i++;
            }
        }
        
        if(i!=nums.size())
            ans.push_back(nums[i]);
        
        return ans;
    }


