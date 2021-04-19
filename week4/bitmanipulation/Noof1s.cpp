//https://leetcode.com/problems/number-of-1-bits/submissions/
//O(no. of set bits) time
int hammingWeight(uint32_t n) {
        
        int ans=0;
        
        while(n){
            ans++;
            n=n&(n-1);
        }
        
        return ans;
    }

//O(no. of bits)
int hammingWeight(uint32_t n) {
        
        int ans=0;
        
        while(n){
            ans+=n&1;
            n>>=1;
        }
        
        return ans;
    }
