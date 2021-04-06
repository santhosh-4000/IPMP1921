//https://leetcode.com/problems/first-unique-character-in-a-string/submissions/
class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<vector<int>> count(26, vector<int>(2));
        
        for(int i=0;i<s.length();i++){
           if(count[s[i]-'a'][0] == 0){
            count[s[i]-'a'][0]++;
            count[s[i]-'a'][1]=i;
            }
            else 
                count[s[i]-'a'][0]++;
        }
        
        /*for(int i=0;i<s.length();i++)
            if(count[s[i]-'a'] == 1)
                return i;*/
        
        int min=INT_MAX;
        for(int i=0;i<26;i++){
            if(count[i][0] == 1 && min> count[i][1]){
                min=count[i][1];
            }
        }
        
        return (min<INT_MAX)?min:-1;
    }
