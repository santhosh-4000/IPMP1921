//https://leetcode.com/problems/sort-array-by-increasing-frequency/

//O(nlogn)
static bool compare(vector<int>& a, vector<int>& b){
        if(a[1]<b[1]) return 1;
        if(a[1]==b[1]) return a[0]>b[0];
        return 0;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        
        vector<int> ans;
        vector<vector<int>> freq;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();){
            int tmp=nums[i],c=0;
            while(i<nums.size()&&tmp==nums[i]){
                c++;
                i++;
            }
            freq.push_back({tmp,c});
        }
        
        sort(freq.begin(), freq.end(), compare);
        
        for(int i=0;i<freq.size();i++){
            while(freq[i][1]--){
                ans.push_back(freq[i][0]);
            }
        }
        
        return ans;
    }
