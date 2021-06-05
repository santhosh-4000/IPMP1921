//https://leetcode.com/problems/combinations/

//o-n*nck???? time
void combineUtil(int n, int k,vector<int>& tmp,
                     vector<vector<int>>& ans,int i){
        
        if(k==0){
            ans.push_back(tmp);
            return;
        }
        
        for(int x=i;x<=n;x++){
            tmp.push_back(x);
            combineUtil(n,k-1,tmp,ans,x+1);
            tmp.pop_back();
        }
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> tmp;
        
        combineUtil(n,k,tmp,ans,1);
        return ans;
    }
