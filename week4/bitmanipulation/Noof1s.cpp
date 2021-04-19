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

//lookup table O(1)
class Solution {
public:
    
    int table[256];
    
    Solution(){
        table[0] = 0;
        for(int i=1;i<256;i++){
            table[i]=table[i/2]+(i&1);
        }
    }
    
    int hammingWeight(uint32_t n) {
        
        return (table[n&0xff] + 
               table[(n>>8)&0xff]+
               table[(n>>16)&0xff]+
               table[(n>>24)&0xff]);
        
    }
};
