//https://leetcode.com/problems/number-of-islands/submissions/

//using dfs
//each node is visistedatmost once
//O(n*m) time and space
class Solution {
    int row[4]={0,0,1,-1};
    int col[4]={-1,1,0,0};
public:
    
    bool canRecur(vector<vector<bool>>& vis,int i,int j,
                 vector<vector<char>>& grid){
        int n=vis[0].size(),m=vis.size();
        return (i>=0)&&(j>=0)&&
            (i<m)&&(j<n)&&(grid[i][j]=='1') && (!vis[i][j]);
    }
    
    void DFS(vector<vector<char>>& grid, 
             vector<vector<bool>>& vis,int i,int j){
            
            vis[i][j]=1;
        
            for(int k=0;k<4;k++){
                if(canRecur(vis,i+row[k],j+col[k],grid))
                DFS(grid,vis,i+row[k],j+col[k]);
            }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int m=grid.size(),n=grid[0].size(),ans=0;
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                //cout<<vis[i][j]<<" ";
                if(!vis[i][j]&&grid[i][j]=='1'){
                    DFS(grid,vis,i,j);
                    ans++;
                }
                
            }//cout<<endl;
        }
        
        
        return ans;
    }
    
};

