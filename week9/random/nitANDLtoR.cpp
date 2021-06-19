//https://leetcode.com/problems/bitwise-and-of-numbers-range/submissions/

//O(logn)or O(1) time
int rangeBitwiseAnd(int left, int right) {
        
        int ans=0;
        
        for(int i=0;i<32;i++){
            int b1=left&(1<<(31-i));
            int b2=right&(1<<(31-i));
            if(b1==b2)
                ans|=b1;
            else
                break;
        }
        
        return ans;
    }
