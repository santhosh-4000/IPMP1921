//https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0
//O(nlogk) time and O(k) space
#include <bits/stdc++.h>
using namespace std;

/*void heapify(vector<int> &arr, int i, int n){
        int l,r,largest=i;
        l=(2*i+1<n)?2*i+1:-1;
        r=(2*i+2<n)?2*i+2:-1;
        
        if(l!=-1 && arr[l]>arr[largest])
            largest=l;
        if(r!=-1 && arr[r]>arr[largest])
            largest=r;
        
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,largest,n);
        }
        
}*/

/*int deleteMin(vector<int> &arr, int k, int i){
    int tmp=arr[i];
    
    heapify(arr,i,k+1);
    
    return tmp;
}*/

void sortK_Sorted(vector<int>& arr, int k){
    
  //O(k)
    priority_queue<int, vector<int>, greater<int>> 
    pq(arr.begin(),arr.begin()+k+1);
    
    int index=0;
    
  //O((n-k)logk)
    for(int i=k+1;i<arr.size();i++){
        arr[index++]=pq.top();
        pq.pop();//logk time
        pq.push(arr[i]);
    }
    
    
    //O(klogk)
    while(!pq.empty()){
        arr[index++]=pq.top();
        pq.pop();
    }
    
}

int main() {
	//code
	//m1; plain old insertion sort
	//m2; using heap DS doing now
	int t;
	cin>>t;
	while(t--){
	    
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> arr(n);
	    
    //O(n)
	    for(auto &itr: arr){
	        cin>>itr;
	    }
	    
    //O(nlogk)
	    sortK_Sorted(arr,k);
	    
    //O(n)
	    for(auto &itr: arr){
	        cout<<itr<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
