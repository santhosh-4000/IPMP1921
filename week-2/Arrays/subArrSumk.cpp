//https://leetcode.com/problems/subarray-sum-equals-k/
//bruteForce O(n2)
int subarraySum(vector<int>& nums, int k) {
        
        int n=nums.size(),ans=0;;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k)
                    ans++;
            }
        }
        
        return ans;
    }

//https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
//if k==0
 bool subArrayExists(int arr[], int n)
    {
        
       unordered_set<int> st;
       int sum=0;
       for(int i=0;i<n;i++){
           sum+=arr[i];
           if(st.find(sum)!=st.end()||sum==0)
            return true;
            else
            st.insert(sum);
       }
        
        return false;
    }
//else if k is any
int subarraySum(vector<int>& arr, int k) {
        
        unordered_map<int,int> mp;
        mp[0]++;
       int ans=0,sum=0;
       for(int i=0;i<arr.size();i++){
           sum+=arr[i];
           ans+=mp[sum-k];
           mp[sum]++;
       }
        
        return ans;
        
    }
