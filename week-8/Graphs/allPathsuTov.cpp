//https://leetcode.com/problems/all-paths-from-source-to-target/submissions/

//dfs model can be used
//O(V!) time and space

//if graph is a DAG
void allPathsSourceTargetutil(int i,vector<vector<int>>& graph,
      vector<int>& tmp, 
                                 vector<vector<int>>& ans){
        tmp.push_back(i);
        if(i==graph.size()-1){
            ans.push_back(tmp);
            tmp.pop_back();
            return;
        }
        //vis[i]=1;
        
        for(auto &it: graph[i]){
            //if(!vis[it])
               allPathsSourceTargetutil(it,graph,tmp,ans); 
        }
        
        tmp.pop_back();
        //vis[i]=0;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> tmp;
        
        //vector<bool> vis(graph.size(),0);
        
        allPathsSourceTargetutil(0,graph,tmp,ans);
        
        return ans;
    }

//if not DAG vis nodes in path should be noted
