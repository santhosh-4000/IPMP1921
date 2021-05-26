//https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/submissions/

//naive: O(n2) time const space
int longestSubstring(string s, int k) {
        
        int maxi=0;
        bool flag;
        
        for(int i=0;i<s.length();i++){
                vector<int> count(26,0);
                string tmp="";
                
            for(int j=i;j<s.length();j++){
                tmp+=s[j];
                count[s[j]-'a']++;
                flag=true;
                for(int x=0;x<26;x++){
                    if(count[x]&&count[x]<k){
                        flag=false;
                        break;
                    }
                }
                
                if(flag&&maxi<tmp.length())
                    maxi=tmp.length();
                
                
            }
        }
        
        return maxi;
    }

---------------------------------------------------------------
//divide and conquer
//time complexity-?O(n2) worst case,can be O(nlogn) in random case space-o(logn)
  int longestSubstringUtil(string s, int st, int end, int k){
        if(end-st+1<k) return 0;
        
        vector<int> count(26,0);
        
        for(int i=st;i<=end;i++){
            count[s[i]-'a']++;
        }
        
        for(int i=st;i<=end;i++){
            if(count[s[i]-'a']<k){
                int left=longestSubstringUtil(s,st,i-1,k);
                int right=longestSubstringUtil(s,i+1,end,k);
                
                return max(left,right);
            }
        }
        
        return end-st+1;
    }
    
    int longestSubstring(string s, int k) {
        
        return longestSubstringUtil(s,0,s.length()-1,k);
        
    }






