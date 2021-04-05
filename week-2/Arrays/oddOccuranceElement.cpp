//O(n) time constant space 
//use xor

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int res=0;
        for(int i=0;i<n;i++){
            res^=(arr[i]);
        }
        
        return res;
    }
};
