//https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem
string hackerrankInString(string s) {
    
    string tmp="hackerrank";
    int i=0;
    for(auto &c: s){
        if(i==tmp.length())
            return "YES";
        
        if(c==tmp[i]){
            i++;
        }
    }
    if(i==tmp.length())
            return "YES";
    
    return "NO";
}
