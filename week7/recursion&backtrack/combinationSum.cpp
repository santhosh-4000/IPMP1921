//https://leetcode.com/problems/combination-sum/submissions/

//time complexity?? 

void combinationSumUtil(vector<int>& vec,int i, int target,vector<int>& tmp, vector<vector<int>>& ans ){
        if(target==0){
            ans.push_back(tmp);
            return;
        }
        
        for(int k=i;k<vec.size();k++){
            if(vec[k]>target){
                return;
            }
            tmp.push_back(vec[k]);
            combinationSumUtil(vec,k,target-vec[k],tmp,ans);
            tmp.pop_back();
        }
        
        return;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());//nlogn
        
        vector<vector<int>> ans;
        vector<int> tmp;
        
        combinationSumUtil(candidates,0,target,tmp,ans);//t
        
        return ans;
    }
