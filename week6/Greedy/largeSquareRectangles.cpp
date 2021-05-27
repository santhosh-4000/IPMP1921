//https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

//O(n)-t const-s
int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        
        int maxLen=0;
        
        for(int i=0;i<rectangles.size();i++){
            maxLen=max(maxLen,
                       min(rectangles[i][0],rectangles[i][1]));
        }
        
        int ans=0;
        
        for(int i=0;i<rectangles.size();i++){
            if(maxLen == 
               min(rectangles[i][0],rectangles[i][1]))
                ans++;
        }
        
        return ans;
    }
