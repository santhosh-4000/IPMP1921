//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

//modified dfs
//O(V+E) time O(V) space
bool isCyclicUtil(int s,vector<int> adj[], vector<bool>& vis
	            , vector<bool>& rec){
	    
	    vis[s]=1;
	    rec[s]=1;
	    
	    for(auto &it: adj[s]){
	        if(!vis[it]){
	        if(isCyclicUtil(it,adj,vis,rec))
	            return 1;
	        }
	        if(rec[it])
	            return 1;
	    }
	    rec[s]=0;
	    return 0;
	}
	
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector<bool> vis(V,0),rec(V,0);
	   	
	   	for(int i=0;i<V;i++){
	   	    if(!vis[i])
	   	    if(isCyclicUtil(i,adj,vis,rec))
	   	        return 1;
	   	}
	   	
	   	return 0;
	}
