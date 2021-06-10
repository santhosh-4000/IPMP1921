//https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

//procedure same as directed graph but keep track of parent to not
//misinterpret 2 way edge.
//O(V+E) time O(V) space
bool isCycleUtil(vector<int>adj[], int i, int p,
    vector<bool>& vis){
        vis[i]=1;
        
        for(auto &it: adj[i]){
            if(!vis[it]){
                if(isCycleUtil(adj,it,i,vis))
                return true;
            }
            else if(it!=p)
            return 1;
        }
        
        return 0;
    }
    
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> vis(V,0);
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	        if(isCycleUtil(adj,i,-1,vis))
	        return 1;
	    }
	    
	    return 0;
	}
