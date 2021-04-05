//https://www.hackerrank.com/challenges/2d-array/problem
int hourglassSum(vector<vector<int>> arr) {

    int k[7][2]={{0,0},{0,-1},{0,1},{-1,-1},{1,-1},{-1,1},
                {1,1}};
        
    int max=INT_MIN;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            int sum=0;
            for(int x=0;x<7;x++){
                sum+=arr[i+k[x][1]][j+k[x][0]];
            }
            if(sum>max)
            max=sum;
        }
    }
    
    return max;
}
