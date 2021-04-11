//https://www.geeksforgeeks.org/find-a-sorted-subsequence-of-size-3-in-linear-time/
vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        
        vector<int> smallest(N,INT_MAX),large(N,INT_MIN);
        
        int min=INT_MAX,max=INT_MIN;
        for(auto i=0;i<N;i++){
            if(min>arr[i]){
            min=arr[i];
            }
             smallest[i]=min;
        }
        
        for(auto i=N-1;i>=0;i--){
            if(max<arr[i]){
            max=arr[i];
            }
            large[i]=max;
        }
        
        vector<int> ans;
        for(auto i=1;i<N-1;i++){
            if(smallest[i-1]<arr[i]&&arr[i]<large[i+1]){
                ans.push_back(smallest[i-1]);
                ans.push_back(arr[i]);
                ans.push_back(large[i+1]);
                return ans;
            }
        }
        
        
        return ans;
    }
