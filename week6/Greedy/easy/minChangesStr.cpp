//https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/submissions/

//o-n time
int minOperations(string s) {
        
        int flag=0,count=0;
        for(char &c: s){
            if((flag&&c=='0')||(!flag&&c=='1')){
                count++;
            }
            flag=!flag;
        }
        
        return min(count,(int)s.length()-count);
        
    }
