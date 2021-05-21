//https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
//O(n2) time and O(n) space
int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        stack<int> st;
        queue<int> q;
        
        for(auto i=sandwiches.rbegin();i!=sandwiches.rend();i++){
            st.push(*i);
        }
        
        for(auto &i: students)
            q.push(i);
        
        bool flag=true;
        
        while(flag&&!st.empty()){
            int k=q.size();
            flag=false;
            while(k--){
                if(st.top()==q.front()){
                    q.pop();
                    st.pop();
                    flag=true;
                }
                else{
                    int tmp=q.front();
                    q.pop();
                    q.push(tmp);
                }
            }
        }
        
        return q.size();
    }
