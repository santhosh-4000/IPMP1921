//https://leetcode.com/problems/maximum-subarray/submissions/

//using divide and conquer
//O(nlogn) time O(1) space

int maxSubArrayUtil(vector<int>& nums, int l, int h){
        if(l==h) return nums[l];
        
        int mid=l+(h-l)/2;
        
        int lt=maxSubArrayUtil(nums,l,mid);//t(n/2)
        int rt=maxSubArrayUtil(nums,mid+1,h);//t(n/2)
        
        int max1=INT_MIN,sum=0;;
    //O(n)
        for(int i=mid;i>=l;i--){
            sum+=nums[i];
            if(max1<sum)
                max1=sum;
        }
        
        int max2=INT_MIN;sum=0;
        for(int i=mid+1;i<=h;i++){
            sum+=nums[i];
            if(max2<sum)
                max2=sum;
        }
        
        return max(lt,max(rt,max1+max2));
        
    }
    
    int maxSubArray(vector<int>& nums) {
        
        return maxSubArrayUtil(nums,0,nums.size()-1);
        
    }
//O(n)-t and const spcae
int maxSubArray(vector<int>& nums) {
        
        //if(nums.size() == 1) return nums[0];
        
        int sum=0,maxi=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            
            if(sum<0) sum=0;
            
            sum+=nums[i];
            
            if(maxi<sum)
                maxi=sum;
        }
        
        return maxi;
        
    }
    
