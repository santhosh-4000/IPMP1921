//https://leetcode.com/problems/triangle/
//O(n^2) time and space
int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> table;
        
  //o-n
        for(int i=0;i<n;i++){
            vector<int> tmp(i+1,INT_MAX);
            table.push_back(tmp);
        }
        table[0][0]=triangle[0][0];
        
    //o-n2
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    table[i][j]=triangle[i][j]+
                        table[i-1][j];
                }
                else if(j==i){
                    table[i][j]=triangle[i][j]+
                        table[i-1][j-1];
                }
                else{
                    table[i][j]=triangle[i][j]+
                        min(table[i-1][j-1],table[i-1][j]);
                }
            }
        }
        
      /o-n
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            if(ans>table[n-1][j]){
                ans=table[n-1][j];
            }
        }
        
        return ans;
    }

//o(n2) time O(n) space
int n=triangle.size();
        vector<int> table_past(n,INT_MAX),table_now(n,INT_MAX);
        
        
        table_past[0]=triangle[0][0];
        
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    table_now[j]=triangle[i][j]+
                        table_past[j];
                }
                else if(j==i){
                    table_now[j]=triangle[i][j]+
                        table_past[j-1];
                }
                else{
                    table_now[j]=triangle[i][j]+
                        min(table_past[j-1],table_past[j]);
                }
            }
            table_past=table_now;
        }
        
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            if(ans>table_past[j]){
                ans=table_past[j];
            }
        }
        
        return ans;
    }
