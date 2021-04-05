//https://leetcode.com/problems/intersection-of-two-arrays/
//O((m+n)*log(M+n)
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp;
        vector<int> ans;
        int i=0,j=0;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(i<nums1.size() && j<nums2.size()){
            if( nums1[i] < nums2[j] )
                i++;
            else if(nums1[i] ==  nums2[j]){
                i++;
                j++;
                tmp.insert(nums1[i-1]);
            } 
            else
                j++;
        }
        
        for(auto &i: tmp)
            ans.push_back(i);
        
        return ans;
    }

//O(m+n)
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp1,tmp2;
        vector<int> ans;
        
        
        for(auto &i: nums1){
            tmp1.insert(i);
        }
        cout<<endl;
        for(auto &i: nums2){
            tmp2.insert(i);
        }
        cout<<endl;
        for(auto &i: tmp1){
            
            if(tmp2.find(i) != tmp2.end())
                ans.push_back(i);
        }
        
        return ans;
    }

//For union we can insert elements from both array into set and print set
//Or 

vector<int> Union(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> tmp;
        vector<int> ans;
        int i=0,j=0;
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(i<nums1.size() && j<nums2.size()){
            if( nums1[i] < nums2[j] ){
                i++;
                tmp.insert(nums[i-1]);
            }
            else if(nums1[i] ==  nums2[j]){
                i++;
                j++;
                tmp.insert(nums1[i-1]);
            } 
            else{
                j++;
                tmp.insert(nums[i-1]);
            }
        }
        
        for(auto &i: tmp)
            ans.push_back(i);
        
        return ans;
    }
//Without using sets we can check previus element in ans for duplicates
