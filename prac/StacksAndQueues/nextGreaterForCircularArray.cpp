//https://leetcode.com/problems/next-greater-element-ii/submissions/

//we can concatenate array with itself
//now find next greater for first n elements
vector<int> nextGreaterElements(vector<int>& nums) {
        
        
        int n=nums.size();
        vector<int> ans(n,-1);
        
        vector<int> arr=nums;
        arr.insert(arr.begin(), nums.begin(), nums.end());
        
        stack<int> st;
        
        for(int i=0; i<2*n ;i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                if(st.top()<n)
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        
        
        
        return ans;
        
    }

//Just loop twice onc with pushing into stack another time no pushing into stack
vector<int> nextGreaterElements(vector<int>& arr) {
        
        
        int n=arr.size();
        vector<int> ans(n,-1);
        
        
        
        stack<int> st;
        
        for(int i=0; i<n ;i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                if(st.top()<n)
                ans[st.top()]=arr[i];
                st.pop();
            }
            st.push(i);
        }
        
        for(int i=0; i<n ;i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                if(st.top()<n)
                ans[st.top()]=arr[i];
                st.pop();
            }
            //st.push(i);
        }
        
        return ans;
        
    }
