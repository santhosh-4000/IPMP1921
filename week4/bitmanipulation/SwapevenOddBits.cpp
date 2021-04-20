//https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/1#
//O(1) time and space
unsigned int swapBits(unsigned int n)
    {
    	// Your code here
        unsigned int even=n & 0xAAAAAAAA,
                     odd = n & 0x55555555;
        
        even=even>>1;
        odd=odd<<1;
        
        
    	return (even|odd);
    }
