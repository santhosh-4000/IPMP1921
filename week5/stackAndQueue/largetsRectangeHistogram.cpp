//https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/
//O(n) time and space
//using stack

int largestRectangleArea(vector<int>& heights) {
        
        stack<int> st;
        int maxArea=0;
        
        for(int i=0;i<heights.size();i++){
            while(!st.empty()&&heights[st.top()]>heights[i]){
                int top=st.top();
                st.pop();
                int area=heights[top]*(st.empty()?(i):(i-st.top()-1));
                maxArea=max(area, maxArea);
            }
            st.push(i);
        }
        
        while(!st.empty()){
                int top=st.top();
                st.pop();
                int area=heights[top]*(st.empty()?(heights.size()):(heights.size()-st.top()-1));
                maxArea=max(area, maxArea);
            }
        
        return maxArea;
    }

//bruteforce is to check area formed by every histogram as starting point
//takes O(n2) time complexity and O(1) space
