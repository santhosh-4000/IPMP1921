//https://leetcode.com/problems/water-bottles/submissions/

//time??-o(log(numBotttles))
int numWaterBottles(int numBottles, int numExchange) {
        
        int total=0,emt_bottles=0;
        
        while(numBottles>0){
            total+=numBottles;
            emt_bottles+=numBottles;
            numBottles=emt_bottles/numExchange;
            emt_bottles=emt_bottles%numExchange;
        }
        
        return total;
    }
