//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

//connected graph
//O(V+E) time O(V) space
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    
	    vector<bool> vis(V,0);
	    vector<int> ans;
	    queue<int> q;
	    q.push(0);
	    vis[0]=1;
	    
	    while(!q.empty()){
	        int k = q.front();
	        ans.push_back(k);
	        q.pop();
	        for(auto &it: adj[k]){
	            if(!vis[it]){
	                q.push(it);
	                vis[it]=true;
	            }
	        }
	    }
	    
	    return ans;
	}

//for disconnected graph sep func can be written to cover all vertices
