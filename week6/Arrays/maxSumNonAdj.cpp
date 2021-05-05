//https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

//we just need 2 variables to keep track of max sum incl and excl prev element
//for cur ele, incl=excl+arr[i],
//             excl=max(excl, prev_incl)
//O(n) time and O(1) space
ll FindMaxSum(ll arr[], ll n)
    {
        // Your code here
        
        ll incl=arr[0],excl=0;
        
  //O(n)
        for(ll i=1;i<n;i++){
            int tmp=excl;
            excl=max(incl,excl);
            incl=tmp+arr[i];
        }
        
        return max(incl,excl);
    }
