//leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/submissions/
//O(n)
int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans=0;
        for(int i=0;i<startTime.size();i++){
            if(startTime[i]<=queryTime&&endTime[i]>=queryTime)
                ans++;
        }
        return ans;
    }
