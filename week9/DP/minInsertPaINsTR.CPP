//https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/submissions/

//o(N^2) TIME AND SPACE
int minInsertions(string s) {
        
        int n=s.length();
        
        vector<vector<int>> dp(n, vector<int> (n,0));
        
        for(int l=1;l<n;l++){
            for(int i=0,j=l;j<n;i++,j++){
                if(s[i]==s[j])
                    if(j-i>1)
                        dp[i][j]=dp[i+1][j-1];
                    else
                        dp[i][j]=0;
                else
                    dp[i][j]=1+min(dp[i][j-1],dp[i+1][j]);
            }
        }
        
        return dp[0][n-1];
    }

//can also be soloved using longest common subsequence problem 
//if l is length of LCS betw str and its reverse we need str.len()-l;
