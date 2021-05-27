//

//time ans space complexity???
//the idea is to divide at each operator and calculate subproblems
bool isOper(char &ch){
        return (ch=='+'||ch=='-'||ch=='*');
    }
    
    vector<int> diffWaysToCompute(string expr) {
        
        vector<int> res;
        
        for(int i=0;i<expr.size();i++){
            if(isOper(expr[i])){
                vector<int> left=
                    diffWaysToCompute(expr.substr(0,i));
                vector<int> right=
                    diffWaysToCompute(expr.substr(i+1));
                
                for(int x=0;x<left.size();x++){
                    for(int y=0;y<right.size();y++){
                        
                        if(expr[i]=='+'){
                            res.push_back(left[x]+right[y]);
                        }
                        else if(expr[i]=='-'){
                            res.push_back(left[x]-right[y]);
                        }
                        else if(expr[i]=='*'){
                            res.push_back(left[x]*right[y]);
                        }
                        
                    }  
                }
                
            }
        }
        
        
        if(res.empty())
            res.push_back(stoi(expr));
        
        return res;
        
    }

//DO DP solution
