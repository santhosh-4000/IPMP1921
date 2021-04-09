//https://leetcode.com/problems/reverse-words-in-a-string/
string reverseWords(string s) {
        vector<string> tmp;
        int i=0;
        while(i<s.length()){
            while(i<s.length()&& s[i]==' '){
                i++;
            }
            string tmp1="";
            while(i<s.length()&& s[i]!=' '){
                tmp1+=s[i];
                i++;
            }
            if(tmp1!="")
            tmp.push_back(tmp1);
        }
        
        reverse(tmp.begin(), tmp.end());
        string ans="";
        for(auto &i: tmp){
            ans+=i;
            ans+=' ';
        }
        
        return ans.substr(0,ans.size()-1);
    }

//another method is to remove extra spaces using erase
//reverse whole string
//reverse individual word
//O(1)
