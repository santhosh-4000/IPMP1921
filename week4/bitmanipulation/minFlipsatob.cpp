//https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1
//O(no. of bits to be flipppled)
 int countBitsFlip(int a, int b){
        
        // Your logic here
        int xr=a^b,ans=0;
        
        while(xr){
            ans++;
            xr=xr&(xr-1);
        }
        
        return ans;
    }
