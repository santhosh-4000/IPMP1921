//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#

//O(m*n) time and space
int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>> dp(n+1,vector<int>(m+1));
        int ans=0;
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)
                dp[i][j]=0;
                
                else if(S1[i-1]==S2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);
                }
                
                else
                dp[i][j]=0;
            }
        }
        
        return ans;
    }

//O(min(m,n)) space 
int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        vector<vector<int>> dp(2,vector<int>(m+1));
        int ans=0;
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0)
                dp[1][j]=0;
                
                else if(S1[i-1]==S2[j-1]){
                    dp[1][j]=1+dp[0][j-1];
                    ans=max(ans,dp[1][j]);
                }
                
                else
                dp[1][j]=0;
            }
            dp[0]=dp[1];
        }
        
        return ans;
    }
