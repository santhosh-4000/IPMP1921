//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

//https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
//above contains graph representation with different key values can be used as index

//For connected graph
//O(V+E) time O(V) extra space
	void dfsOfGraphUtil(vector<int> adj[],
	    vector<bool>& vis, vector<int>& ans, int s){
	        vis[s]=1;
	        ans.push_back(s);
	        
	        for(auto &it: adj[s]){
	            if(!vis[it])
	            dfsOfGraphUtil(adj,vis,ans,it);
	        }
	        
	    }
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<bool> vis(V, 0);
	    vector<int> ans;
	    
	    dfsOfGraphUtil(adj,vis,ans,0);
	    
	    return ans;
	}

//for disconnected graph
//same complexity
void dfsOfGraphUtil(vector<int> adj[],
	    vector<bool>& vis, vector<int>& ans, int s){
	        vis[s]=1;
	        ans.push_back(s);
	        
	        for(auto &it: adj[s]){
	            if(!vis[it])
	            dfsOfGraphUtil(adj,vis,ans,it);
	        }
	        
	    }
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<bool> vis(V, 0);
	    vector<int> ans;
	    
	    for(int i=0;i<V;i++)
	    if(!vis[i])
	    dfsOfGraphUtil(adj,vis,ans,i);
	    
	    return ans;
	}
