//https://leetcode.com/problems/minimum-path-sum/submissions/

//O(n^2) time
int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid[0].size(),m=grid.size();
        
        for(int i=1;i<n;i++){
            grid[0][i]+=grid[0][i-1];
        }
        
        for(int i=1;i<m;i++){
            grid[i][0]+=grid[i-1][0];
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
            }
        }
        
        return grid[m-1][n-1];
    }

//https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1
int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int n=Matrix.size(),m=Matrix[0].size();
        
        if(n==1)
        return Matrix[0][0];

        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    Matrix[i][j]+=max(Matrix[i-1][j],
                                    Matrix[i-1][j+1]);
                }
                else if(j==m-1){
                    Matrix[i][j]+=max(Matrix[i-1][j],
                                    Matrix[i-1][j-1]);
                }
                else
                {
                Matrix[i][j]+=max(Matrix[i-1][j],
                            max(Matrix[i-1][j+1],
                            Matrix[i-1][j-1]));}
            }
        }
        
        int maxi=INT_MIN;
        for(int j=0;j<m;j++){
            maxi=max(maxi,Matrix[n-1][j]);
        }
        return maxi;
    }
