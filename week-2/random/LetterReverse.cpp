//https://leetcode.com/problems/reverse-only-letters/ 
bool isSpecial(char c){
        
        return !('a'<=c&&c<='z')&&!('A'<=c&&c<='Z');
            
    }
    
    string reverseOnlyLetters(string S) {
        int i=0,j=S.length()-1;
        
        while(i<j){
            if(isSpecial(S[i])){
                i++;continue;
            }
            if(isSpecial(S[j])){
                j--;continue;
            }
            swap(S[i],S[j]);
            i++;j--;
        }
        
        return S;
    }
