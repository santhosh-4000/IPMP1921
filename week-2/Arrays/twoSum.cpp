//https://leetcode.com/problems/two-sum/submissions/
//O(nlogn)
class Solution {
public:
    
    static bool compare(vector<int> a, vector<int> b){
        return a[0]<b[0];
    }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<vector<int>> help(nums.size());
        
        int idx=0;
        for(auto &i: nums){
            help[idx].push_back(i);
            help[idx].push_back(idx++);
        }
        
        sort(help.begin(), help.end(), compare);
        
        int i=0,j=help.size()-1;
        
        vector<int> ans;
        
        while(i<j){
            int sum=help[i][0]+help[j][0];
            if(sum<target)
                i++;
            else if(sum> target)
                j--;
            else
            {
                ans.push_back(help[i][1]);
                ans.push_back(help[j][1]);
                
                return ans;
            }
        } 
        
        return ans;
    }
};

//O(n) with hashing possible
//check for set(target-sum)(or hash if indices needed) if not present add to set else return values
//
