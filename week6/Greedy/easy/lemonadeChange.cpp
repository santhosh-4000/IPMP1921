//https://leetcode.com/problems/lemonade-change/submissions/
//o-n -time o-1 - space

bool lemonadeChange(vector<int>& bills) {
        
        int fives=0,tens=0;
        
      
        for(int &i: bills){
            if(i==5) 
                fives++;
            
            else if(i==10) {
                tens++;
                if(fives>0)
                    fives--;
                 else return false;
            }
            else{
                if(fives>0){
                    if(tens>0){
                        fives--;
                        tens--;
                    }
                    else{
                        if(fives>=3)
                            fives-=3;
                        else
                            return false;
                    }
                }
                else
                    return false;
            }
        }
        
        return  true;
    }
