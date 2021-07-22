//https://leetcode.com/problems/permutations-ii/

//
void permuteUtil(vector<int>& nums,int i, 
                    vector<vector<int>>& ans){
        
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> st;
        
        for(int k=i;k<nums.size();k++){
            if(st.count(nums[k])) continue;
            
            st.insert(nums[k]);
            swap(nums[i],nums[k]);
            permuteUtil(nums,i+1,ans);
            swap(nums[i],nums[k]);
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        
        permuteUtil(nums, 0, ans);
        return ans;
    }
