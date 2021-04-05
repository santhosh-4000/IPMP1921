//https://www.hackerrank.com/challenges/dynamic-array/problem
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    
    vector<vector<int>> arr(n);
    vector<int> ans;
    int lastAns=0,idx;
    
    for(auto &i: queries){
        if(i[0]==1){
            idx=((i[1]^lastAns)%n);
            arr[idx].push_back(i[2]);
        }
        else{
            idx=((i[1]^lastAns)%n);
            lastAns=arr[idx][i[2]%arr[idx].size()];
            ans.push_back(lastAns);
        }
    }
    
    return ans;
}
