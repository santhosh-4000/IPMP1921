//https://practice.geeksforgeeks.org/problems/topological-sort/1

//modification of dfs
//cur ele should come before its adjacent vertices
//O(V+E) time o(v) space
void topoSortutil(vector<int> adj[],vector<bool>& vis,
	    int i, vector<int>& ans){
	        vis[i]=1;
	        
	        for(auto &it: adj[i]){
	            if(!vis[it])
	            topoSortutil(adj,vis,it,ans);
	        }
	        
	        ans.push_back(i);
	    }
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    vector<bool> vis(V,0);
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	        topoSortutil(adj,vis,i,ans);
	    }
	    
	    reverse(ans.begin(),ans.end());
	    
	    return ans;
	}
