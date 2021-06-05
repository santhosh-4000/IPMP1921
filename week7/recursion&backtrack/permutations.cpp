//https://leetcode.com/problems/permutations/submissions/

//o-n! time
void permuteUtil(vector<int>& nums,int i, 
                    vector<vector<int>>& ans){
        
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int k=i;k<nums.size();k++){
            swap(nums[i],nums[k]);
            permuteUtil(nums,i+1,ans);
            swap(nums[i],nums[k]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        permuteUtil(nums,0,ans);
        return ans;
    }
