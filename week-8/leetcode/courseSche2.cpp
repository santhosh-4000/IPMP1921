//https://leetcode.com/problems/course-schedule-ii/submissions/

//O(V+E) time and space
bool DFSUtil(vector<vector<int>>& adj, vector<bool>& vis,
                vector<bool>& rec, int i, vector<int>& ans){
        vis[i]=1;
        rec[i]=1;
        
        for(auto &it: adj[i]){
            
            if( (!vis[it]) && DFSUtil(adj,vis,rec,it,ans))
                return 1 ;
            if(rec[it])
                return 1;
        }
        
        rec[i]=0;
        ans.push_back(i);
        return 0;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses,vector<int>());
        
        for(auto &ed: prerequisites){
            adj[ed[1]].push_back(ed[0]);
        }
        
        vector<bool> vis(numCourses,0),rec(numCourses,0);
        
        vector<int> ans1,ans2;
        bool flag=false;
        
        for(int i=0;i<numCourses;i++)
            if(!vis[i]&&DFSUtil(adj,vis,rec,i,ans1))
                flag=true;
        
        reverse(ans1.begin(),ans1.end());
        
        return (flag)?ans2:ans1;
    }
