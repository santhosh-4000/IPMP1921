//https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/
//O(m+n)time and const
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i=0,j=matrix[0].size()-1;
        
        //O(m+n)
        while(i<matrix.size()&&j<matrix[0].size()){
            if(matrix[i][j]<target){
                i++;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else
                return true;
        }
        
        return false;
    }

//divide and conquer
//time complexity?
bool searchMatrixUtil(vector<vector<int>>& matrix, int il,int ih,int jl, int jh, int target){
        
        if(il>ih||jl>jh) return false;
        
        int i=(il+ih)/2;
        int j=(jl+jh)/2;
        
        int cur=matrix[i][j];
        
        if(target<cur){
            return searchMatrixUtil(matrix,il,i-1,jl,jh,target)||
                   searchMatrixUtil(matrix,il,ih,jl,j-1,target); 
        }
        if(target == cur) return true;
        
        return searchMatrixUtil(matrix,i+1,ih,jl,jh,target)||
                   searchMatrixUtil(matrix,il,ih,j+1,jh,target); 
    }
    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target)     {
          int n=matrix.size(),m=matrix[0].size();
        
        return searchMatrixUtil(matrix,0,n-1,0,m-1,target);
    }


    
