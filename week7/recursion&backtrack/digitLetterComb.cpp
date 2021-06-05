//https://leetcode.com/problems/letter-combinations-of-a-phone-number/

//o-3^n to 4^n time
 void letterCombinationsUtil(string digits,string& tmp
                               , vector<string>& ans){
        if(digits==""){
            if(tmp!="")
            ans.push_back(tmp);
            return;
        }
        
        
        for(int i=0;i<maping[digits[0]-'2'].size();i++){
            tmp.push_back(maping[digits[0]-'2'][i]);
            
              letterCombinationsUtil(digits.substr(1),tmp,ans);
            
           tmp.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string tmp;
        letterCombinationsUtil(digits,tmp,ans);
        return ans;
    }
