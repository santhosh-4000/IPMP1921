//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 int maxDepth(string s) {
        
        int i=0,n=s.length();
        //stack<int> st;
        
        int count=0,maxi=0;
        
        for(i=0;i<n;i++){
            
            if(s[i] == '('){
                count++;
                maxi=max(maxi, count);
                
            }
            
            else if(s[i]==')'){
                count--; 
            }
            
        }
        
        return maxi;
    }
