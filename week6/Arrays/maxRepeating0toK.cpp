//https://practice.geeksforgeeks.org/problems/maximum-repeating-number4858/1
//use indexing
//iteration1: increament array elements like arr[arr[i]%k]+=k
//iteration2: check for maximum occurence(generally element with max value)
//iter3: do arr[i]=arr[i]%k to get original values

int maxRepeating(int *arr, int n, int k) {
	    // code here
	    
	    for(int i=0;i<n;i++){
	        arr[arr[i]%k]+=k;
	    }
	    
	    int max=-1,ans=0;
	    
	    for(int i=0;i<n;i++){
	        //cout<<arr[i]<<" ";
	        int cur=arr[i]/k;
	        if(cur>max){
	            max=cur;
	            ans=i;
	        }
	    }
	    
	    return ans;
	}
