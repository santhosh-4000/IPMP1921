//https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

//O(n2) time O(n) space
int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> L(arr,arr+n);
	    
	    int ans=0;
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[j]<arr[i]&&L[i]<arr[i]+L[j]){
	                L[i]=arr[i]+L[j];
	            }
	        }
	        ans=max(ans,L[i]);
	    }
	    
	    return ans;
	}  
