//https://leetcode.com/problems/beautiful-array/submissions/

//o(nlogn) t and s
 vector<int> beautifulArray(int n) {
        
        vector<int> ans;
        
        if(n==0)
            return ans;
        
        if(n==1) {
            ans.push_back(1);
            return ans;
        }
        
        vector<int> tmp1,tmp2;
        
        tmp1=beautifulArray((n+1)/2);//n/2
        tmp2=beautifulArray(n/2);//n/2
        
        //o(n)
        for(auto &i: tmp1){
            ans.push_back(2*i-1);
        }
        
        for(auto &i: tmp2){
            ans.push_back(2*i);
        }
        
        return ans;
    }
