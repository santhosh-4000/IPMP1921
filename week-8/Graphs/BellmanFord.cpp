//https://practice.geeksforgeeks.org/problems/negative-weight-cycle3504/1

//asuming connected graph
//O(V*E) time O(V) space
int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    
	    vector<int> dist(n, INT_MAX);
	    
	    
	    //0 is src
	    dist[0]=0;
	    
	    for(int i=0;i<n-1;i++){
	        for(auto &ed: edges){
	            if(dist[ed[0]]!=INT_MAX&&
	            dist[ed[1]]>dist[ed[0]]+ed[2])
	            dist[ed[1]]=dist[ed[0]]+ed[2];
	        }
	    }
	    
	    for(auto &ed: edges){
	            if(dist[ed[0]]!=INT_MAX&&
	            dist[ed[1]]>dist[ed[0]]+ed[2])
	            return 1;
	        }
	    
	    return 0;
	}
};

//if not connected graph then we can make
//another function to check all components
