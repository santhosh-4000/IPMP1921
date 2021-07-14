//https://leetcode.com/problems/diagonal-traverse/submissions/

//O(m*n) time and space
//up Diagonal-(r--, c++), down-(r++,c--)
//st fm r,c=0,0 
//alternate between up and down

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
        vector<int> res;
        
        bool up=1;
        int row=0,col=0;
        
        while(res.size()!=n*m){
            res.push_back(mat[row][col]);
            if(up){
                if(col==m-1){
                    row++;
                    up=0;
                }
                else if(row==0){
                    col++;
                    up=0;
                }
                else{
                    row--;
                    col++;
                }
            }
            else{
                if(row==n-1){
                    col++;
                    up=1;
                }
                else if(col==0){
                    row++;
                    up=1;
                }
                else{
                    row++;
                    col--;
                }
            }
        }
        
        return res;
    }
