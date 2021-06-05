//https://leetcode.com/problems/subsets/submissions/

//o-2^n time
void subsetsUtil(vector<int>& nums, int i, vector<int>&tmp
                    ,vector<vector<int>>& ans){
        if(i==nums.size()){
            ans.push_back(tmp);
            return;
        }
        
        subsetsUtil(nums,i+1,tmp,ans);
        tmp.push_back(nums[i]);
        subsetsUtil(nums,i+1,tmp,ans);
        tmp.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        subsetsUtil(nums,0,tmp,ans);
        return ans;
    }
