//https://www.hackerrank.com/challenges/recursive-digit-sum/problem

//o-n?? time
int sumstr(string n){
    int sum=0;
    for(auto &c: n){
        sum+=(c-'0');
    }
    return sum;
}

int superDigitUtil(long num){
    if(num<10)
        return static_cast<int>(num);
    
    long sum=0;
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    
    return superDigitUtil(sum);
}
