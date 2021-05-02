//https://leetcode.com/contest/biweekly-contest-51/problems/closest-room/

//TLE... O(n*k) time
static bool compare(vector<int> &a, vector<int> &b){
        
        return a[1]<b[1];
        
    }
    
    
    
    vector<int> closestRoom(vector<vector<int>>& rooms, vector<vector<int>>& queries) {
        
        sort(rooms.begin(), rooms.end(), compare);//O(nlogn)
      
        vector<int> ans(queries.size());
        
        vector<int> tmp(rooms.size());
        
      //O(n)
        for(int i=0;i<rooms.size();i++){
            tmp[i]=rooms[i][1];
        }
        
      //O(klogn+k(n-k)) = O(n*k)
        for(int i=0;i<queries.size();i++){
            //log(n)
            int k= lower_bound(tmp.begin(), tmp.end(), queries[i][1])-tmp.begin();
            
            
            int min=INT_MAX,idx=-1;
          //O(n-k)
            for(int j=k;j<rooms.size();j++){
                if(min>abs(rooms[j][0]-queries[i][0])){
                    min=abs(rooms[j][0]-queries[i][0]);
                    idx=rooms[j][0];
                }
                else if(min==abs(rooms[j][0]-queries[i][0])&&idx>rooms[j][0]){
                    idx=rooms[j][0];
                }
            }
            ans[i]=idx;
        }
        
        return ans;
    }

//
