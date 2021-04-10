//https://www.hackerrank.com/challenges/sparse-arrays/problem
//O(n+n) time and O(n)space. n-strings,m-queries
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    
    unordered_map<string,int> mp;
    
    for(auto &i: strings){
        if(mp.find(i) == mp.end())
            mp[i]=1;
        else
            mp[i]++;
    }
    
    vector<int> ans;
    for(auto &j: queries){
        ans.push_back(mp[j]);
    }
    
    return ans;
}

//We can use sorting also
