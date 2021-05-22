//https://leetcode.com/problems/toeplitz-matrix/
//O(n2)
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i-1][j-1]!=matrix[i][j])
                    return 0;
            }
        }
        
        return 1;
   }
