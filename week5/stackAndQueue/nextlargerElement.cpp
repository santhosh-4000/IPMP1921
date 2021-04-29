//https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1#
//O(n) time and space
//using stack
 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        stack<long long> st;
        vector<long long> ans(arr.size(),-1);
        
        for(auto it=arr.rbegin();it!=arr.rend();it++){
            while(!st.empty()&&st.top()<=*it){
                st.pop();
            }
            ans[arr.rend()-it-1]=(st.empty())?(-1):st.top();
            st.push(*it);
        }
        
        return ans;
    }

//bruteforce takes O(n2) time and O(1) space
