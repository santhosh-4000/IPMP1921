//https://www.interviewbit.com/problems/next-smallest-palindrome/
//o(n) time O(n) space
bool areAll9s(string& A){
    //O(n)
    for(char &ch: A)
        if(ch!='9')
            return 0;
            
    return 1;
}

string addMid(string &A){
    int n=A.size(),c=1;
    int i=(n-1)/2,j=(n-1)/2;
    if(!(n&1))j+=1;
    
    //O(n)
    while(c){
        int num=A[i]-'0';
        num+=c;
        c=num/10;
        num=num%10;
        A[i]='0'+num;
        A[j]=A[i];
        i--,j++;
    }
    while(i>=0){
        A[j]=A[i];
        i--,j++;
    }
    
    return A;
}


string Solution::solve(string A) {
    
    string ans="";
    int n=A.size();
    
    //O(n)
    if(areAll9s(A)){
        ans+='1';
        for(int i=1;i<n;i++){
            ans+='0';
        }
        ans+='1';
        
        return ans;
    }
    
    
    int i=n/2-1,j=(n+1)/2;
    //if(n&1) j+=1;
    
    //O(n)
    while(i>=0&&A[i]==A[j]){
        i--,j++;
    }
    if(i==-1){
        return addMid(A);
    }
    bool flag=0;
    //O(n)
    while(i>=0&&(A[i]>=A[j]||flag==1)){
        A[j]=A[i];
        j++,i--;
        flag=1;
    }
    
    if(i!=-1){
        return addMid(A);
    }
    
    return A;
}
