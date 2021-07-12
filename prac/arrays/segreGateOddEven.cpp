//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-numbers4629/1#

//O(nlogn)
void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int i=0,j=0;
	    while(j<n){
	        if(arr[j]&1){
	            j++;
	        }
	        else{
	            swap(arr[i], arr[j]);
	            i++,j++;
	        }
	    }
	    sort(arr, arr+i);
	    sort(arr+i, arr+n);
	}
