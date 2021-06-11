//https://leetcode.com/problems/grumpy-bookstore-owner/submissions/

//O(cus.size()) time O(1) space
//sliding window
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int sum=0,maxi=0;
        
        for(int i=0;i<minutes;i++){
            sum+=(customers[i]*grumpy[i]);
        }
        maxi=sum;
        for(int i=minutes;i<customers.size();i++){
            sum+=(customers[i]*grumpy[i]);
            sum-=(customers[i-minutes]*grumpy[i-minutes]);
            maxi=max(sum,maxi);
        }
        
        int ans=maxi;
        
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0)
                ans+=customers[i];
        }
        
        return ans;
    }
