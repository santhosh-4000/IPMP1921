//https://www.hackerrank.com/challenges/strong-password/problem
bool isSpecial(char c){
    string tmp="!@#$%^&*()-+";
    
    for(auto &i: tmp)
    if(c==i)
    return true;
    
    return false;
}

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    
    bool lowflag=false,highflag=false,dflag=false,      sflag=false;
    
    
    for(auto &c:  password){
        if(!lowflag&&'a'<=c&&c<='z'){
            lowflag=true;
        }
        if(!highflag&&'A'<=c&&c<='Z'){
            highflag=true;
        }
        if(!dflag&&'0'<=c&&c<='9'){
            dflag=true;
        }
        if(!sflag&&isSpecial(c))
            sflag=true;
    }
    
    if(!lowflag)n++;
    if(!highflag)n++;
    if(!dflag)n++;
    if(!sflag)n++;
    
    return max(6,n)-password.length();
}
