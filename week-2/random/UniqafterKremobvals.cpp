//https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/submissions/
int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        vector<int> st;
        
        
        for(auto &i:arr){
            if(mp.find(i)==mp.end())
                mp[i] = 1;
            else
                mp[i]++;
        }
        
        for(auto &i: mp){
            st.push_back(i.second);
        }
        sort(st.begin(),st.end());
        
        int tmp=0, ans=st.size();
        for(auto i=st.begin();i!=st.end();i++){
            if(tmp+(*i)<=k){
                tmp+=(*i);
                cout<<tmp<<(*i)<<" ";
                ans--;
            }
            else
                break;
        }
        
        
        return ans;
    }

//
