//

//if coping string takes const time
//t-O(2^n) 
void generateParenthesisUtil(int n1, int n2, 
                            vector<string>& ans, string tmp){
        if(n1==0){
            while(n2){
                tmp.push_back(')');
                n2--;
            }
            ans.push_back(tmp);
            return;
        }
        
        generateParenthesisUtil(n1-1,n2+1,ans,tmp+'(');//t(n-1)
        
        if(n2!=0)
        generateParenthesisUtil(n1,n2-1,ans,tmp+')');//t(n-1)
        
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        generateParenthesisUtil(n,0,ans,"");//t
        return ans;
    }
