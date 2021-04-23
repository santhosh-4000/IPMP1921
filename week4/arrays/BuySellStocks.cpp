//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/
//O(n) time and constant space

int maxProfit(vector<int>& prices) {
        
        int ans=0;
        
        int st,en,i=0;
        
        
        while(i<prices.size()){
            st=prices[i];
            i++;
            while(i<prices.size()&&prices[i-1]<prices[i]){
                i++;
            }
            en=prices[i-1];
            ans+=(en-st);
        }
        
        return ans;
    }
