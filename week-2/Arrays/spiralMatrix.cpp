//https://leetcode.com/problems/spiral-matrix/submissions/
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int x=0,y=0,n=matrix.size(),m=matrix[0].size();
        vector<int> ans;
        
        while(x<n&&y<m){
            for(int j=x;j<m;j++){
                ans.push_back(matrix[x][j]);
            }
            x++;
            for(int i=x;i<n;i++){
                ans.push_back(matrix[i][m-1]);
            }
            m--;
            if(x<n){
                for(int j=m-1;j>=y;j--){
                ans.push_back(matrix[n-1][j]);
                }
                n--;
            }
            if(y<m){
                for(int i=n-1;i>=x;i--){
                ans.push_back(matrix[i][y]);
                }
                y++;
            }
        }
        
        return ans;
    }
