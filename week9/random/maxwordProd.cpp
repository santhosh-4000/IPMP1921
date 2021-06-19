//https://leetcode.com/problems/maximum-product-of-word-lengths/submissions/

//O(w2+w*w.len()) time O(w) space
int maxProduct(vector<string>& words) {
        
        int w=words.size();
        vector<int> vis(w,0);
        
        for(int i=0;i<w;i++){
            for(char &ch: words[i]){
                vis[i]|=(1<<(ch-'a'));
            }
        }
        
        int ans=0;
        
        for(int i=0;i<w;i++){
            for(int j=i+1;j<w;j++){
                if(vis[i]&vis[j])
                    continue;
                //cout<<vis[i]<<" "<<vis[j]<<endl;
                int tmp=words[i].length()*words[j].length();
                ans=max(ans,tmp);
            }
        }
        
        return ans;
    }
