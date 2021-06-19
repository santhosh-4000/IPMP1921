//https://leetcode.com/problems/repeated-dna-sequences/

//O(n) time and space
vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        string tmp=s.substr(0,10);
        mp[tmp]=1;
        vector<string> ans;
        
        for(int i=10;i<s.length();i++){
            tmp=tmp.substr(1)+s[i];
            if(mp[tmp]==1)
                ans.push_back(tmp);
            mp[tmp]++;
        }
        
        return ans;
    }
