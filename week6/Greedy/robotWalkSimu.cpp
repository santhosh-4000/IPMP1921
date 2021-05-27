//https://leetcode.com/problems/walking-robot-simulation/submissions/

//n-commands.size(), m-obstacles.size() t-O(m+n) s-o(m)
//idea is to walk step by step in current direction stop if front is obstacle
int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        //pair<int,int> cur_pos={0,0};
        unordered_set<string> st;
        
        for(int i=0;i<obstacles.size();i++){
            st.insert(to_string(obstacles[i][0])+" "+to_string(obstacles[i][1]));
        }
        
        vector<vector<int>> dir{{0,1},{1,0},{0,-1},{-1,0}};
        int d=0,res=0,x=0,y=0;
        
        
        for(int &c: commands){
            while(c>0&&
            st.find(to_string(x+dir[d][0])+
                    " "+to_string(y+dir[d][1]))==st.end()){
                x=x+dir[d][0];
                y=y+dir[d][1];
                c--;
            }
            res=max(res,x*x+y*y);
            if(c==-1) {
                d=(d+1)%4;
            }
            else if(c==-2){
                 d=(d+3)%4;
            }
        }
        
        return (res);
    }
