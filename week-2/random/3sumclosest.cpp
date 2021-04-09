//https://leetcode.com/problems/3sum-closest/submissions/
int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        int min=INT_MAX,sum,add,ans;
        for(int i=0;i<nums.size()-2;i++){
            sum=target-nums[i];
            int j=i+1,k=nums.size()-1;
            while(j<k){
                add=nums[j]+nums[k];
                if(sum == add)
                    return target;
                if(min>abs(add-sum)){
                    min=abs(add-sum);
                    ans=add-sum;
                    cout<<ans<<" "<<min<<endl;
                }
                    if(sum>add)
                    j++;
                    else {
                    k--;
                    }
                cout<<j<<" "<<k<<endl;
            }
        }
        
        return ans+target;
        
    }
