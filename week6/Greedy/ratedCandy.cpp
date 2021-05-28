//https://leetcode.com/problems/candy/submissions/

//time ans space --o(n)
int candy(vector<int>& ratings) {
        
        vector<int> res(ratings.size(),1);//s-n
        
  //o-n
        for(int i=1;i<ratings.size();i++){
            if(ratings[i-1]<ratings[i])
                res[i]=max(res[i],res[i-1]+1);
        }
        
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i+1]<ratings[i])
                res[i]=max(res[i],res[i+1]+1);
        }
        
        int ans=0;
        for(int &i: res) ans+=i;
        
        return ans;
    }
