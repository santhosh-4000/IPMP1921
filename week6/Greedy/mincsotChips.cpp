//https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/submissions/

//O(n)-t
int minCostToMoveChips(vector<int>& position) {
        
        int odds=0,evens=0;
        
        for(auto &i: position){
            if(i&1) odds++;
            else evens++;
        }
        
        return min(odds, evens);
    }
