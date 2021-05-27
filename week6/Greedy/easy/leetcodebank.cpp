//https://leetcode.com/problems/calculate-money-in-leetcode-bank/submissions/

//o-n time
int totalMoney(int n) {
        
        int total=0,a=0;
        
        for(int i=0;i<n;i++){
            int k=i%7;
            if(k==0) a++;
            
            total+=(a+k);
        }
        
        return total;
    }
