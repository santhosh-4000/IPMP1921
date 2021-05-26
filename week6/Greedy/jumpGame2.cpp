//

//o-n time and space
int jump(vector<int>& nums) {
        
        
        
        int prev_max=-1,cur_max=0,n=nums.size(),ans=0;
        
        if(n==1) return 0;
        
  //o-n
        for(int i=0;i<n;i++){
            nums[i]=min(i+nums[i],n-1);
        }
        
  //o-n
        while(prev_max<cur_max){
            
            
            if(cur_max==n-1)
                return ans;
            
            int tmp=cur_max;
            for(int i=prev_max+1;i<=tmp;i++){
                cur_max=max(cur_max,nums[i]);
            }
            
            
            prev_max=tmp;
            cout<<cur_max<<" "<<prev_max<<endl;
            ans++;
        }
        
        return -1;
    }

//without modifing array also possible
int jump(vector<int>& nums) {
        
        
        
        int prev_max=-1,cur_max=0,n=nums.size(),ans=0;
        
        if(n==1) return 0;
        
        /*for(int i=0;i<n;i++){
            nums[i]=min(i+nums[i],n-1);
        }*/
        
        while(prev_max<cur_max){
            
            
            if(cur_max>=n-1)
                return ans;
            
            int tmp=cur_max;
            for(int i=prev_max+1;i<=tmp;i++){
                cur_max=max(cur_max,nums[i]+i);
            }
            
            
            prev_max=tmp;
            cout<<cur_max<<" "<<prev_max<<endl;
            ans++;
        }
        
        return -1;
    }
