//https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle1840/1#

//O(n) time and space
int safePos(int n, int k) {
        // code here
        int p=1;
        
        for(int n1=2;n1<=n;n1++){
            p=(p+k-1)%n1+1;
        }
        
        return p;
    }
