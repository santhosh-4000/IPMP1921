//https://leetcode.com/problems/goat-latin/submissions/

//O(n) time and space
bool isVowel(char ch){//O(1)
        
        return (ch=='a')||(ch == 'e')||(ch == 'i')||
            (ch =='o')||(ch=='u')||(ch=='A')||
            (ch == 'E')||(ch == 'I')||(ch =='O')||
            (ch=='U');
        
    }
    
    string toGoatLatin(string sentence) {
        
        string tmp = "maa",ans="", word, t;
        int i=0,n=sentence.size();
        
      //o(n)
        while(i<n){
            word="",t="";
            
            if(!isVowel(sentence[i]))
                t+=sentence[i],i++;
            
            while(i<n&&sentence[i]!=' '){
                word+=sentence[i];
                i++;
            }
            
            ans+=word;
            ans+=t;
            ans+=tmp;
            
            if(i<n)
            ans+=' ';
            
            tmp+='a';
            
            i++;
            
        }
        
        return ans;
    }
