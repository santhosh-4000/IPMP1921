//https://leetcode.com/problems/minimum-cost-to-cut-a-stick/submissions/

//O(m^3) time O(m^2) space
 int minCost(int n, vector<int>& cuts) {
        
        cuts.push_back(0);
        cuts.push_back(n);
        int m=cuts.size();
        sort(cuts.begin(),cuts.end());
        vector<vector<int>> dp(m, vector<int>(m,0));
        
        for(int l=2;l<m;l++){
            for(int st=0;st<m-l;st++){
                int en=st+l;
                
                for(int k=st+1;k<en;k++){
                    int val=cuts[en]-cuts[st]+dp[st][k]+dp[k][en];
                    if(dp[st][en]==0)
                        dp[st][en]=val;
                    else
                    dp[st][en]=min(dp[st][en],val);
                }
                
            }
        }
        
        return dp[0][m-1];
    }
