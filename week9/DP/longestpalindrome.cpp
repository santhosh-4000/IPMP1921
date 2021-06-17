//https://leetcode.com/problems/longest-palindromic-substring/submissions/

//O(n^2) time and space
//constructing long palindromes from short onesd
string longestPalindrome(string s) {
        
        int n=s.length(),maxi=0,i1=1,j1=0;
        vector<vector<int>> dp(n, vector<int> (n,0));
        string ans="";
        
        for(int l=0;l<n;l++){
            for(int i=0,j=l;j<n;j++,i++){
                if(i==j)
                    dp[i][j]=1;
                else if(s[i]==s[j]){
                    if(j-i>1&&dp[i+1][j-1])
                        dp[i][j]=1;
                    else if(j-i==1)
                        dp[i][j]=1;
                }
                else
                    dp[i][j]=0;
                
                if(dp[i][j]){
                i1=i;
                j1=j;
                }
            }
            
        }
        
       
        return s.substr(i1,j1-i1+1);
    }
