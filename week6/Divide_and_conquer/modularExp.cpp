//https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1
//O(logR)

long long power(int N,int R)
    {
       //Your code here
       long long p=1e9+7,ans=1;
       
       while(R){
           if(R&1)
            ans=(ans%p*N%p)%p;
            
            N=(N%p*N%p)%p;
            R=R>>1;
       }
        
        return ans;
  }

// (a*b*c)%p = (( ( (a%p)*(b%p) )%p ) *(c%p) )%p
//logR time
long long power(int N,int R)
    {
       //Your code here
       
       if(R==0){
           return 1;
       }
        long long p=1e9+7;
        
       if(R==1) return N%p;
       
       long long x=power(N,R/2)%p;
       
       if(R&1)
        return (((N%p)*(x%p))%p*(x%p))%p;
        
        return ((x%p)*(x%p))%p;
       
    }
//for negative y case
//we can do 1/ans at end or
//logy time
#include <iostream>
using namespace std;
#define K 1e9+7

float power(float x, int y){
    //x=x%K;
    if(x==0) return 0;
    if(y==0) return 1;
    
    float tmp=power(x,y/2);
    if(y%2 != 0){
        if(y>0) return tmp*tmp*x;
        else return (tmp*tmp)/x;
    }
    
    return tmp*tmp;
}


int main()
{
    float x = 2;
    int y = -3;
    cout << power(x, y);
    return 0;
}


