//https://leetcode.com/problems/rotate-image/submissions/

//O(n^2) time const space
void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        
        for(int l=0;l<n;l++){
            for(int i=l+1;i<n;i++){
                swap(matrix[l][i], 
                     matrix[i][l]);
                //cout<<l<<" "<<i<<endl;
            }
        }
        
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), 
                    matrix[i].end());
        }
    }
