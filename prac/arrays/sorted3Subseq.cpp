//https://practice.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1

//find an element which is smaller tahn itself on the left and greater on right
//so use 2 aux arrays to keep track of smaller elents that is smaller than cur and smae with greater

 vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> ans,smaller(N,0),greater(N,0);
        
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=1;i<arr.size()-1;i++){
            maxi=max(maxi,arr[N-i]);
            mini=min(mini, arr[i-1]);
            
            if(arr[i]>mini)
            smaller[i]=mini;
            if(arr[N-i-1]<maxi)
            greater[N-i-1]=maxi;
        }
        
        for(int i=1;i<N-1;i++){
            if(smaller[i]&&greater[i]){
                ans.push_back(smaller[i]);
                ans.push_back(arr[i]);
                ans.push_back(greater[i]);
                return ans;
            }
        }
        
        return ans;
    }
