//https://leetcode.com/problems/fibonacci-number/submissions/
//O(logn)
//divide and conquer by matrix exponentiation

void multiply(int A[2][2], int B[2][2]){
        int tmp[2][2];
        
        tmp[0][0]=A[0][0]*B[0][0]+A[0][1]*B[1][0];
        tmp[0][1]=A[0][0]*B[0][1]+A[0][1]*B[1][1];
        
        tmp[1][0]=A[1][0]*B[0][0]+A[1][1]*B[1][0];
        tmp[1][1]=A[1][0]*B[0][1]+A[1][1]*B[1][1];
        
        A[0][0]=tmp[0][0];
        A[0][1]=tmp[0][1];
        A[1][0]=tmp[1][0];
        A[1][1]=tmp[1][1];
        
    }
    
//O(logn)
    void power(int F[2][2],int N){
        if(N==0||N==1){
            return;
        }
        
        power(F,N/2);
        //O(1)
        multiply(F,F);
        
        if(N%2!=0){
            int M[2][2]={{1,1},{1,0}};
            multiply(F,M);
        }
        
    }
    
    int fib(int n) {
        
        if(n==0)
            return 0;
        
        int F[2][2]={{1,1},{1,0}};
        
        power(F,n-1);
        
        return F[0][0];
        
    }

//using direct result
//O(1) time and space

int fib(int n) {
        
        double phi=(sqrt(5)+1)/2;
        
        double pwr=pow(phi, n);
        
        return round(pwr/sqrt(5));
        
   }


