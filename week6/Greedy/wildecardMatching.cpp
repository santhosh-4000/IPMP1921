//https://leetcode.com/problems/wildcard-matching/submissions/

//time complexity??-TLE
bool isMatch(string s, string p) {
        
        int i=0,j=0,n=s.length(),m=p.length();
        
        while(i<n&&j<m){
            
            if(p[j]=='?'){
                i++,j++;
            }
            
            else if(p[j]=='*'){
                
                while(j<m&&p[j]=='*') j++;
                
                //if(j==m) break;
                
                for(int k=i;k<=n;k++){
                    if(isMatch(s.substr(k),p.substr(j))){
                       // cout<<k<<j;
                       return true;
                    }
                }
                       
            }
            
            else{
                if(s[i]==p[j]) i++,j++;
                else
                return false;
            }
                       
        }
        
        while(j<m&&p[j]=='*') j++;
        
        return (i==n && j==m);        
        
    }





