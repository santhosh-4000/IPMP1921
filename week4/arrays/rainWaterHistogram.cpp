//https://leetcode.com/problems/trapping-rain-water/submissions/
//O(n) time and space

int trap(vector<int>& height) {
  //O(n) space
        vector<int> left_max,right_max(height.size()+1,0);
        left_max.push_back(0);
        right_max[height.size()]=0;
        
  //O(n) t
        for(auto &i: height){
            int tmp=max(i,left_max[left_max.size()-1]);
            left_max.push_back(tmp);
        } 
        
  //O(n) t
        for(int i=height.size()-1;i>=0;i--){
            right_max[i]=max(height[i],right_max[i+1]);
        } 
        
        int ans=0;
        
        cout<<height.size()<<" ";
        
  //O(n) t
         for(int x=1;x<height.size();x++){
            int tmp=min(left_max[x],right_max[x+1]);
             
            if(height[x]<tmp)
            ans+=(tmp-height[x]);
        }
        
        return ans;
    }

//brute force takes O(n2) time
