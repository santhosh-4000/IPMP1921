//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#
//O(n*m)
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int max=0,ind=-1;
	    for(int i=0;i<n;i++){
	        int count=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                count++;
	            }
	        }
	        if(count>max){
	            max=count;
	            ind=i;
	        }
	    }
	    
	    return ind;
	}

//as each row is sorted
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    
	    int j=m-1,ind=-1;
	    for(int i=0;i<n;i++){
	        
	        while(j>=0&&arr[i][j]==1){
	            j--;
	            ind=i;
	        }
	        
	    }
    
        return ind;
	}
