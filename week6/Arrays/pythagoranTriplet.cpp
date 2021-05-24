//https://practice.geeksforgeeks.org/problems/pythagorean-triplet3018/1
//O(n2) time O(1) space

bool sum2(int arr[], int n, int target){
	    int i=0,j=n-1;
	    while(i<j){
	        int sum=arr[i]+arr[j];
	        if(sum>target) j--;
	        else if(sum<target) i++;
	        else {
	            //cout<<arr[i]<<" "<<arr[j]<<" "<<target;
	            return true;
	        }
	    }
	    return false;
	}
bool checkTriplet(int arr[], int n) {
	    // code here
	    
	    for(int i=0;i<n;i++){
	        arr[i]=arr[i]*arr[i];
	    }
	    
	    sort(arr,arr+n);
	    
	    int j=n-1;
	    
	    for(;j>=0;j--){
	        int sum=arr[j];
	        if(sum2(arr,j,sum)) return true;
	    }
	    
	    return false;
	}
