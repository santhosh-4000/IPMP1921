//https://leetcode.com/problems/maximal-square/submissions/

//O(n*m) time and space
int maximalSquare(vector<vector<char>>& matrix) {
        
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>> S(n, vector<int>(m,0));
        
        
        for(int i=0;i<n;i++)
            S[i][0]=matrix[i][0]-'0';
        
        for(int i=0;i<m;i++)
            S[0][i]=matrix[0][i]-'0';
        
        int maxi=0;
       for(int i=1;i<n;i++){
           for(int j=1;j<m;j++){
               if(matrix[i][j]=='1'){
                   int k1=S[i-1][j];
                   int k2=S[i][j-1];
                   int k3=S[i-1][j-1];
                   S[i][j]=min(k1,min(k2,k3))+1;
               }
                else{
                    S[i][j]=0;
                }
           }
       }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxi=max(maxi,S[i][j]);
            }
        }
        
        
        
        return maxi*maxi;
    }
