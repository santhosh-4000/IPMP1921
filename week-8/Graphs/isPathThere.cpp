//https://www.geeksforgeeks.org/find-if-there-is-a-path-between-two-vertices-in-a-given-graph/

//using bfs
//O(V+E) time O(V) space
bool isPath(int u,int v){
    
    if(u==v)
    return true;
    
    vector<bool> vis(V,0);
    queue<int> q;
    
    q.push(u);
    vis[u]=1;
    
    while(!q.empty()){
        int k=q.front();
        q.pop();
        
        for(auto &it: adj[k]){
            if(vis[it])
                continue;
            else{
                if(it==v)
                return true;
                
                q.push(it);
                vis[it]=1;
            }
        }
    }
    
    return false;
}

//dfs can also be used
