//https://www.hackerrank.com/challenges/caesar-cipher-1/problem
string caesarCipher(string s, int k) {
    
    
    for(auto &i: s){
        if('a'<=i&&i<='z')
            i=(i+k-'a')%26+'a';
        else if('A'<=i&&i<='Z')
            i=(i+k-'A')%26+'A';
    }
    
    return s;
}
