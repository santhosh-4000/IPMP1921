//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        
        unordered_map <char,int> hash;
        int st=0,i=0,len=0;
        
        for(i=0;i<s.length();i++){
            if(hash.find(s[i])==hash.end())
                hash[s[i]] = i;
            else{
                
                if(st>hash[s[i]]){
                     hash[s[i]]=i;
                     continue;
                }
                
                len=max(len,i-st);
                st=hash[s[i]]+1;
                hash[s[i]]=i;
            }
        }
        
        len=max(len,i-st);
        
        return len;
    }
