//https://leetcode.com/problems/find-xor-sum-of-all-pairs-bitwise-and/
//

//bruteForce bitwise And O(n*m)

int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        
        int ans=0;
        
        for(auto &i:arr1){
            for(auto &j: arr2){
                ans^=(i&j);
            }
        }
        
        return ans;
   }

//
//O(m+n) by using property & is distributive over ^

int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        
        int ans=0,xr=0;
        
        for(auto &i: arr2){
            xr^=i;
        }
        
        for(auto &j: arr1){
            ans^=(xr&j);
        }
        
        return ans;
   }
