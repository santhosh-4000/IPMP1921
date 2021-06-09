//https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1

//O(V3) time const space
void shortest_distance(vector<vector<int>>&mat){
	    // Code here
	    
	    for(int k=1;k<=mat.size();k++){
	        for(int i=0;i<mat.size();i++){
	            for(int j=0;j<mat.size();j++){
	                if(mat[i][k-1]==-1||mat[k-1][j]==-1)
	                continue;
	                int tmp=
	                mat[i][k-1]+mat[k-1][j];
	                if(mat[i][j]==-1||mat[i][j]>tmp)
	                mat[i][j]=tmp;
	            }
	        }
	    }
	    
	}

//we can find negative cycle by checking mat[i][i]<0 after algo
