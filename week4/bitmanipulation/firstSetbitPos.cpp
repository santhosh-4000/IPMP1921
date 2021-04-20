//https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1
//O(1)
unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int tmp=n^(n&(n-1));
  //n&(~(n-1)
        
        return log2(tmp)+1;
    }

//ffs(n) func

