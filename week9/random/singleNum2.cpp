//https://leetcode.com/problems/single-number-ii/submissions/

//O(n) time O(1) space
int singleNumber(vector<int>& nums) {
        
        int res=0;
        
        for(int i=0;i<32;i++){
            int c=0;
            for(auto &j: nums){
                if(j&(1<<i))
                    c++;
                int k=j&(1<<i);
                cout<<k<<" ";
            }
            res|=((c%3)<<i);
        }
        
        return res;
    }
