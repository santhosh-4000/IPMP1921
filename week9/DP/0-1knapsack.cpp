//https://www.interviewbit.com/problems/0-1-knapsack/

//O(max(n*n,w*n)) time O(w) space
int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    
    vector<int> prev(C+1,0),cur(C+1,0);
    
    for(int i=0;i<A.size();i++){
        for(int w=1;w<=C;w++){
            if(B[i]<=w)
            cur[w]=max(prev[w],prev[w-B[i]]+A[i]);
            else
            cur[w]=prev[w];
        }
        prev=cur;
    }
    
    return cur[C];
}
