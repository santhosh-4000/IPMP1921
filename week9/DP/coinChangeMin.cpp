//https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/submissions/

//O(m*n) time O(amount space
int coinChange(vector<int>& coins, int amount) {
 if(amount==0)
            return 0;
        
        vector<int> cur(amount+1,-1);
        
        cur[0]=0;
        
        for(int i=0;i<coins.size();i++){
            for(int j=1;j<=amount;j++){
                if(j>=coins[i]){
                    if(cur[j]==-1){
                        if(cur[j-coins[i]]!=-1)
                        cur[j]=cur[j-coins[i]]+1;
                    }
                   else if(cur[j-coins[i]]!=-1)
                        cur[j]=min(cur[j],cur[j-coins[i]]+1);
                }
            }
        }
        
        return cur[amount];
    }
