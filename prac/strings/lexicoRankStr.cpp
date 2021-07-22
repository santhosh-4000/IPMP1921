//https://practice.geeksforgeeks.org/problems/rank-the-permutations2323/1

//no repetirion allowed
//O(n2) time O(n) space
class Solution{
public:
    int M=1000003;
    
  //O-n
    int fact(int n){
        int ans=1;
        for(int i=2;i<=n;i++){
            ans=((ans%M)*(i%M))%M;
        }
        return ans;
    }
    
    
    int rank(string S){
        // code here
        string tmp=S;//O-n space
        sort(tmp.begin(), tmp.end());
        
        int mp[256]={};//o-1 space
        int c=1;
        
      //o-n
        for(int i=0;i<tmp.length();i++){
            if(mp[tmp[i]]==0)
            mp[tmp[i]]=c++;
            else
            return 0;
        }
        
        int res=1;
        //o-n2
        for(int i=0;i<S.size();i++){
          //o-n
            res=(res%M+((mp[S[i]]-1)*fact(S.size()-i-1))%M)%M;
            for(int k=S[i];k<256;k++){
                if(mp[k]>0)
                mp[k]--;
            }
        }
        
        return res;
    }
};

//factorial can be calculated before loop if no modulo operatrion is asked 
//timne complexity in thatr case can be reduced to O(n)
