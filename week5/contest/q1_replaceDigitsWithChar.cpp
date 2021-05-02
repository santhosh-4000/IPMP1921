//https://leetcode.com/contest/biweekly-contest-51/problems/replace-all-digits-with-characters/
//O(n) time O(1) space
string replaceDigits(string s) {
        
        for(int i=1;i<s.length();i+=2){
            s[i]=(s[i]-'0')+s[i-1];
        }
        
        return s;
    }
