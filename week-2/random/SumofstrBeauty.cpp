//
//cal sum of max freq char - min freq char for all substrings
//for all substrings count of each  is updated in O(1) using count array
//maximum and minimum occuring char numbers are also calculated in constant time 
//O(n2) complexity time O(1) space
int beautySum(string s) {
        
        
        string str;
        int ans=0;
        
        for(int i=0;i<s.length();i++){
            vector<int> count(26,0);
            str+="";
            for(int j=i;j<s.length();j++){
                str+=s[j];
                count[s[j]-'a']++;
                int min=INT_MAX,max=INT_MIN;
                for(int k=0;k<26;k++){
                    if(min>count[k]&&count[k]>0)
                        min=count[k];
                    if(max<count[k])
                        max=count[k];
                }
                ans+=(max-min);
            }
        }
        
        return ans;
    }
