//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
//O(n) time O(1) space
int maxProfit(vector<int>& prices) {
        
        int min_ele=prices[0],ans=0;
        
        for(int i=1;i<prices.size();i++){
            
            min_ele=min(min_ele, prices[i]);
            
            ans=max(ans, prices[i]-min_ele);
            
        }
        
        return ans;
        
    }
