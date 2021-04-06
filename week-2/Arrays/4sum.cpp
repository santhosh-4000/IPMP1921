//https://leetcode.com/problems/4sum/submissions/
class Solution {
public:
    
    
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        int k,l;
        vector<vector<int>> ans;
        
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            
            for(int j=i+1;j<n-2;j++){
                
                if(j>i+1 && nums[j] == nums[j-1])
                continue;
                
                k=j+1;l=n-1;
                
                while(k<l){
                    int sum=nums[i]+nums[j]+
                            nums[k]+nums[l];
                    
                    if(sum == target){
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[k]);
                        tmp.push_back(nums[l]);
                        if(ans.size()==0||ans[ans.size()-1]!=tmp)
                        ans.push_back(tmp);
                        k++;l--;
                    }
                    
                    else if(sum < target)
                        k++;
                    else
                        l--;
                    
                }
                
            }
        }
        
        return ans;
    }
    
};
