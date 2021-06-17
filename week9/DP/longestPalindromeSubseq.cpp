//https://leetcode.com/problems/longest-palindromic-subsequence/submissions/

//O(n^2) time and O(n^2) space
int longestPalindromeSubseq(string s) {
        int n=s.length();
        vector<vector<int>> dp(n, vector<int>(n,0));
        
        for(int l=0;l<n;l++){
            for(int i=0,j=l;j<n;j++,i++){
                if(i==j)
                    dp[i][j]=1;
                else if(s[i]==s[j])
                    dp[i][j]=2+dp[i+1][j-1];
                else
                    dp[i][j]=max(dp[i+1][j], dp[i][j-1]);
            }
        }
        
        return dp[0][n-1];
    }
