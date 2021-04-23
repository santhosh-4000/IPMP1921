//https://www.interviewbit.com/problems/leaders-in-an-array/
//O(n) time and constant space

vector<int> Solution::solve(vector<int> &A) {
    
    int max_ele=A[A.size()-1];
    vector<int> ans;
    ans.push_back(max_ele);
    
    for(int i=A.size()-2;i>=0;i--){
        if(A[i]>max_ele){
            ans.push_back(A[i]);
            max_ele=A[i];
        }
    }
    
    return ans;
}
