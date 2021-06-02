//https://www.hackerrank.com/challenges/the-power-sum/problem

//o-2^(k-1) time k=Nth root of X 
int powersumUtil(int X, int N, int cur){
    int val=X-pow(cur,N);
    if(val==0) return 1;
    if(val<0) return 0;
    
    
    return powersumUtil(X,N,cur+1)+
    powersumUtil(val,N,cur+1);
}
 

int powerSum(int X, int N) {
    
    return powersumUtil(X,N,1);
}
