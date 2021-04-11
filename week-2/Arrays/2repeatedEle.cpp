//https://practice.geeksforgeeks.org/problems/two-repeated-elements-1587115621/1#
pair<int,int> twoRepeated (int arr[], int N)
    {
        // Your code here
        pair<int,int> ans;
        int a[2],k=0;
        
        for(int i=0;i<N+2;i++){
            if(arr[abs(arr[i])]>0)
            arr[abs(arr[i])]=-arr[abs(arr[i])];
            else{
            a[k++]=abs(arr[i]);
            }
        }
        
        ans.first=a[0];ans.second=a[1];
        
        return ans;
    }
};
