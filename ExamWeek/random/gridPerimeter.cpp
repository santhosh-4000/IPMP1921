//https://leetcode.com/problems/island-perimeter/submissions/

//O(n1*n2)
int islandPerimeter(vector<vector<int>>& grid) {
        
        int n1=grid.size(),ans=0,n2=grid[0].size();
        
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                
                /*if((i==0||j==0)&&grid[i][j]==1)
                    ans++;*/
                if(grid[i][j]){
                if(i==0||grid[i-1][j]==0) ans++;
                if(j==0||grid[i][j-1]==0) ans++;
                if(i==n1-1||grid[i+1][j]==0) ans++;
                if(j==n2-1||grid[i][j+1]==0) ans++;
                }
            }
        }
        
        return ans;
        
    }
