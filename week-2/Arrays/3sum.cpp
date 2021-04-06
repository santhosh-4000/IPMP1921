//https://leetcode.com/problems/3sum/submissions/

class Solution {
public:
    
    void find2sum(vector<int> &arr,int& i,int target,vector<vector<int>>& ans){
        
        unordered_set <int> st;
        
        for(int k=i+1;k<arr.size();k++){
            if(st.find(target-arr[k]) == st.end()){
                st.insert(arr[k]);
            }
            else{
                vector<int> tmp;
                st.insert(arr[k]);
                tmp.push_back(-target);
                tmp.push_back(arr[k]);
                tmp.push_back(*st.find(target-arr[k]));
                
                if(ans.size()==0||ans[ans.size()-1]!=tmp)
                ans.push_back(tmp);
                
            }
        }
        
        while(i<arr.size()-1&&arr[i]==arr[i+1])
            i++;
        
        
        
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            int target = -nums[i];
            
            if(target<0)
                break;
            
            find2sum(nums,i,target,ans);
        }
        
        return ans;
    }
};
