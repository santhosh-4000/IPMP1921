//https://leetcode.com/problems/course-schedule/submissions/

//O(V+E) time and space
bool DFSUtil(vector<vector<int>>& adj, vector<bool>& vis,
                vector<bool>& rec, int i){
        vis[i]=1;
        rec[i]=1;
        
        for(auto &it: adj[i]){
            
            if( (!vis[it]) && DFSUtil(adj,vis,rec,it))
                return 1 ;
            if(rec[it])
                return 1;
        }
        
        rec[i]=0;
        return 0;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> adj(numCourses,vector<int>());
        
        for(auto &ed: prerequisites){
            adj[ed[1]].push_back(ed[0]);
            //cout<<ed[0]<<" "<<ed[1]<<"\n";
        }
        
        vector<bool> vis(numCourses,0),rec(numCourses,0);
        
        for(int i=0;i<numCourses;i++)
            if(!vis[i]&&DFSUtil(adj,vis,rec,i))
                return 0;
        
        return 1;
    }
