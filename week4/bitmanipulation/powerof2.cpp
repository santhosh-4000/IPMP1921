//https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1#

bool isPowerofTwo(long long n){
        
        // Your code here   
        
        return n&&(!(n&(n-1)));
    }
