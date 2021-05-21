//https://leetcode.com/problems/find-common-characters/submissions/
//O(nc) nc-totoal charecters
vector<string> commonChars(vector<string>& words) {
        
        vector<int> hash(26,INT_MAX);
        vector<string> ans;
        
       
        for(int i=0;i<words.size();i++){
            vector<int> tmp(26,0);
            for(auto &ch: words[i]){
                    tmp[ch-'a']++;
            }
            
            for(int i=0;i<26;i++){  
                hash[i]=min(hash[i], tmp[i]);     
            }
                 
        }
        
        for(int i=0;i<26;i++){
            while(hash[i]--){
                string str="";
                str+=('a'+i);
                ans.push_back(str);
            }
        }
        
        return ans;
    }
