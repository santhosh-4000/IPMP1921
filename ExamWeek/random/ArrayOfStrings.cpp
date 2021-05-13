//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string tmp1 = "",tmp2="";
        
        for(auto &i: word1){
            tmp1+=i;
        }
        for(auto &i: word2){
            tmp2+=i;
        }
        
        return tmp1==tmp2;
    }
