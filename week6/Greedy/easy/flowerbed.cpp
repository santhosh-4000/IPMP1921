//https://leetcode.com/problems/can-place-flowers/submissions/

//o-n time ansd space
bool canPlaceFlowers(vector<int>& flowerbed, int k) {
        
        int n=flowerbed.size();
        vector<bool> vis(n,1);//s-n
        
  //o-n
        for(int i=0;i<n;i++){
            if(flowerbed[i]==1) vis[i]=false;
            
            else if((i>0&&flowerbed[i-1]==1)||
                   (i!=(n-1)&&flowerbed[i+1]==1))
                vis[i]=false;
        }
        
        int i=0,ans=0,c=0;
        
  //o-n
        while(i<n){
            c=0;
            while(i<n&&vis[i]==true){
                i++;
                c++;
            }
            ans+=(c+1)/2;
            while(i<n&&vis[i]==false){
                i++;
            }
        }
        
        return ans>=k;
    }

//o-n time o-1 space
bool canPlaceFlowers(vector<int>& flowerbed, int k) {
        
        int n=flowerbed.size();
        //vector<bool> vis(n,1);
        
        if(k==0) return 1;
        
        for(int i=0;i<n;i++){
            if(flowerbed[i]==1) continue;
            
            else if((i>0&&flowerbed[i-1]==1)||
                   (i!=(n-1)&&flowerbed[i+1]==1))
                continue;
            
            k--;
            flowerbed[i]=1;
            if(k==0) return 1;
        }
        
        return k==0;
    }
