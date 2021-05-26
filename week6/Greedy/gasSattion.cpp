//https://leetcode.com/problems/gas-station/submissions/

//o-n time o-1 space
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0,total=0,res=INT_MAX;
        
        for(int i=0;i<gas.size();i++){
            sum+=gas[i]-cost[i];
            total+=gas[i]-cost[i];
            if(sum>=0)
                res=min(res,i);
            else{
                sum=0;
                res=INT_MAX;
            }
        }
        
        return (total>=0)?res:-1;
    }

//brute force considers every path which takes o-n2 time
