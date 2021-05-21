//https://leetcode.com/problems/projection-area-of-3d-shapes/submissions/
//O(row*col) time and O(1) space
int projectionArea(vector<vector<int>>& grid) {
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
            int maxi=0;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]) ans++;
                maxi=max(maxi, grid[i][j]);
            }
            ans+=maxi;
        }
        
        for(int i=0;i<grid[0].size();i++){
            int maxi=0;
            for(int j=0;j<grid.size();j++){
                maxi=max(maxi, grid[j][i]);
            }
            ans+=maxi;
        }
        
        return ans;
    }

