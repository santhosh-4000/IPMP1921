//https://www.hackerrank.com/challenges/two-characters/problem
int alternate(string s) {
    
    string tmp;int maxi=0;
    vector<bool> there(26,false);
    
    
    
    for(auto &i: s){
        if(!there[i-'a']){
            tmp+=i;
            there[i-'a']=true;
        }
    }
    
    if(tmp.size()==1) return 0;
    
    for(int i=0;i<tmp.length();i++){
        for(int j=i+1;j<tmp.length();j++){
        string str="",s1="";str+=tmp[i];str+=tmp[j];
            bool flag=0;
            
            for(auto &c:s){
                if(c==str[0]||c==str[1])
                s1+=c;
            }
            
            for(auto &c: s1){
                if(c==str[str.size()-2]){
                    str+=c;
                }
                else{
                    flag=true;
                    break;
                }
            }
            
            if(!flag)
            maxi=max(maxi, (int)str.length()-2);
        }    
    }
    
    return maxi;

}
