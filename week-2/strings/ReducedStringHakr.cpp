//https://www.hackerrank.com/challenges/reduced-string/problem
#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {

    stack<int> st;
    
    for(auto &c: s){
    if(st.empty()||st.top()!=c)
    st.push(c);
    else
    st.pop();
    }
    
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    
    reverse(ans.begin(),ans.end());
    
    if(ans!="")
    return ans;
    
    return "Empty String";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
