//https://leetcode.com/problems/non-overlapping-intervals/submissions/

//O(nlogn) time const space
 static bool compare(vector<int>& a, vector<int>& b){
        return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), compare);
        
        int last=intervals[0][1];
        int ans=0;
        
        for(int i=1;i<intervals.size();i++){
            if(last>intervals[i][0]){
                ans++;
            }
            else{
                last=intervals[i][1];
            }
        }
        
        return ans;
    }

//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

static bool compare(vector<int>& a, vector<int>& b){
        return a[1]<b[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        
        int last=intervals[0][1];
        int ans=0;
        
        for(int i=1;i<intervals.size();i++){
            if(last>=intervals[i][0]){
                ans++;
            }
            else{
                last=intervals[i][1];
            }
        }
        
        return intervals.size()-ans;
    }
