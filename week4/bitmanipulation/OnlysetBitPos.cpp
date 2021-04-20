//https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1#
//O(1) time
int findPosition(int N) {
        // code here
        if(N&&(!(N&(N-1)))){
            return log2(N)+1;
        }
        return -1;
    }

//O(no. of bits) time
int findPosition(int N) {
        // code here
        if(N&&(!(N&(N-1)))){
            int ans=0;
            while(N){
                N>>=1;
                ans++;
            }
            return ans;
        }
        return -1;
    }
