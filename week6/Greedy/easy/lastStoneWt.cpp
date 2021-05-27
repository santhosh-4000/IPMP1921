//https://leetcode.com/problems/last-stone-weight/submissions/

//o-n2logn time , no extra space
int lastStoneWeight(vector<int>& stones) {
        
        //int i=stones.size();
        
        while(stones.size()>1){
            sort(stones.begin(), stones.end());
            int k=*stones.rbegin();
            stones.pop_back();
            k-=*stones.rbegin();
            stones.pop_back();
            
            stones.push_back(k);
        }
        
        if(stones.size()==1) return stones[0];
        
        return 0;
    }

//o-n2 time possible if insertion made instead of sorting
