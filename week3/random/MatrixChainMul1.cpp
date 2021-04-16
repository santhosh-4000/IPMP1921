//https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1#
//O(n3) time and O(n2)space
//returns mimimum scalar multiplications
int matrixMultiplication(int N, int arr[])
    {
        // code here
        vector<vector<int>> m(N, vector<int> (N,INT_MAX));
        
        for(int i=1;i<N;i++){
            m[i][i]=0;
        }
        
        //int count=0;
        for(int j=1;j<N;j++){
            for(int i=1;i<=N-j-1;i++){
                for(int k=i;k<i+j;k++){
                    m[i][i+j]=min(m[i][i+j],
                            m[i][k]+m[k+1][i+j]+
                            (arr[i-1]*arr[k]*arr[i+j]));
                }
            }
        }
        
        return m[1][N-1];
    }
