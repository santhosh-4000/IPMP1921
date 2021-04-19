//https://leetcode.com/problems/reverse-bits/submissions/
//O(b) time and space b- no. of bits
//takes 64 iter everytime in this case
 uint32_t reverseBits(uint32_t n) {
        uint32_t ans;
    vector<bool> tmp(32);
    
    int i=0;
    while(n){
        tmp[i++]=n&1;
        n>>=1;
    }
    
    uint64_t p=1;
    for(int i=0;i<32;i++){
        if(tmp[31-i]) ans+=p;
        p*=2;
    }
    
    return ans;
    }

//O(b) time O(1) space
uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                ans|=(1<<(31-i));
            }
        }
        
        return ans;
    }

//
uint32_t reverseBits(uint32_t n) {
        uint32_t ans=n&1;
        int count=31;
        
        n>>=1;
        while(n){
            ans<<=1;
            ans|=(n&1);
            n>>=1;
            count--;
        }
        
        if(count>0)
        ans<<=(count);
        
        return ans;
    }

//
