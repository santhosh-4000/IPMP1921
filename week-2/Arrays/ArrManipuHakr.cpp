//https://www.hackerrank.com/challenges/crush/problem
//O(n+q) time and O(n) space 
#include<bits/stdc++.h>
using namespace std;
 int main(){
 int n;
    cin>>n;
    
    vector<long> arr;
    for(int i=0;i<n;i++)
    arr.push_back(0);
    
    int q;
    cin>>q;
    while(q--){
        int l,r;
        long v;
        cin>>l>>r>>v;
        arr[l-1]+=v;
        if(r!=n)
        arr[r]-=v;
    }
    
    long max=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max)
        max=sum;
    }
    cout<<max<<endl;
 }
