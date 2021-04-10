//https://www.hackerrank.com/challenges/camelcase/problem
int camelcase(string s) {
    
    if(s=="") return 0;
    
    int ans=1;
    for(auto &i: s){
        if('A'<=i&&i<='Z')
        ans++;
    }
    
    return ans;
}
