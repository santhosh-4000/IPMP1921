//https://leetcode.com/problems/remove-duplicate-letters/submissions/

//every char is added or removed atmost 2wice
//O(n) time and O(1)space
//idea is to keep until ( a better element occurs or present element occurs again).
string removeDuplicateLetters(string s) {
        
        vector<int> count(26, 0);
        vector<bool> vis(26,false);
        string res="";
        
        for(auto &c: s) count[c-'a']++;
        
        for(auto &c: s){
            
            if(vis[c-'a']){
                count[c-'a']--;
                continue;
            }
            
            while(!res.empty() && res.back()>c
                  &&count[res.back()-'a']>1){
                count[res.back()-'a']--;
                vis[res.back()-'a']=false;
                res.pop_back();
            }
            
            res.push_back(c);
            vis[res.back()-'a']=true;
            
        }
        
        return res;
    }
