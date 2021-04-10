//https://www.hackerrank.com/challenges/mars-exploration/problem
int marsExploration(string s) {
    int ans=0;
    for(int i=0;i<s.length();i+=3){
        if(s[i]!='S') ans++;
        if(s[i+1]!='O') ans++;
        if(s[i+2]!='S') ans++;
    }
    
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
