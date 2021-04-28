//https://leetcode.com/problems/online-stock-span/

class StockSpanner {
    stack<pair<int,int>> stk;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        while(!stk.empty()&&stk.top().first<=price){
            count+=stk.top().second;
            stk.pop();
        }
        stk.push({price,count});
        return count;
    }
};





//https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#
//O(n) time and space

vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> ans;
       stack<int> st;
       
      
       
       for(int i=0;i<n;i++){
               while(!st.empty()&&price[st.top()]<=price[i]){
                   st.pop();
               }
               int tmp=(st.empty())?(i+1):(i-st.top());
               ans.push_back(tmp);
               st.push(i);
       }
       
  
       return ans;
    }

//brute force checks all previous continuous elements less than or equal to 
//taken element and count is taken as span
//O(n2) time and O(1) space

class StockSpanner {
    stack<pair<int,int>> stk;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        while(!stk.empty()&&stk.top().first<=price){
            count+=stk.top().second;
            stk.pop();
        }
        stk.push({price,count});
        return count;
    }


