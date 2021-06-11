//https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1#

//O(v+E) time and space
void DFSstore(vector<int> adj[], vector<bool>& vis,
	int i, stack<int>& st){
	    vis[i]=1;
	    
	    for(auto &it: adj[i]){
	        if(!vis[it])
	        DFSstore(adj,vis,it,st);
	    }
	    
	    st.push(i);
	}
	
	
	
	void transpose(int V, vector<int> adj[], 
	vector<int> adjT[]){
	    
	    for(int i=0;i<V;i++){
	        for(auto &it: adj[i])
	        adjT[it].push_back(i);
	    }
	    
	}
	
	void DFSUtil(vector<int> adj[], vector<bool>& vis,
	int i){
	    vis[i]=1;
	    
	    for(auto &it: adj[i]){
	        if(!vis[it])
	        DFSUtil(adj,vis,it);
	    }
	    
	}
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        vector<bool> vis(V,0);
        stack<int> st;
        
        for(int i=0;i<V;i++)
        if(!vis[i])
        DFSstore(adj,vis,i,st);
        
        vector<int> adjT[V];
        transpose(V,adj,adjT);
        
        vector<bool> vis2(V,0);
        int ans=0;
        while(!st.empty()){
            if(!vis2[st.top()]){
                DFSUtil(adjT,vis2,st.top());
                ans++;
            }
            st.pop();
        }
        
        return ans;
    }
