//https://leetcode.com/problems/range-sum-query-2d-immutable/submissions/

class NumMatrix {
public:
    vector<vector<int>> sum;
    
    NumMatrix(vector<vector<int>>& matrix) {
        
         sum=matrix;
         
        
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                 sum[i][j]+=sum[i-1][j];
             }
        }
        
        for(int i=1;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                 sum[j][i]+=sum[j][i-1];
             }
        }
       
           /* for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                 cout<<sum[i][j]<<" ";
             }
                cout<<endl;
        }*/
        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int ans=sum[row2][col2];
        if(row1>0)
            ans-=sum[row1-1][col2];
        if(col1>0)
            ans-=sum[row2][col1-1];
        if(row1>0&&col1>0)
            ans+=sum[row1-1][col1-1];
        
        return ans;
    }
};
