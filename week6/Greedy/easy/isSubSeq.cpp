//https://leetcode.com/problems/is-subsequence/submissions/

//O(m+n) time const space
bool isSubsequence(string s, string t) {
        
        int j=0;
        
        for(int i=0;i<t.length();i++){
            if(j==s.length()) return true;
            if(s[j]==t[i]) j++;
        }
        
        return j==s.length();
        
    }
