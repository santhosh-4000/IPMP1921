//https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1

//O(V+E) time O(V+E) space
//to check edge presence -O(V)
vector<vector<int>>printGraph(int V, vector<int> adj[])
	{
	    // Code here
	    
	    vector<vector<int>> ans;
	    
	    
	    for(int i=0;i<V;i++){
	        vector<int> tmp;
	        tmp.push_back(i);
	        for(auto &it: adj[i]){
	            tmp.push_back(it);
	        }
	        ans.push_back(tmp);
	    }
	    
	    return ans;
	}
