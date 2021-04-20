//https://practice.geeksforgeeks.org/problems/swap-two-nibbles-in-a-byte0446/1#
//O(1) time
int swapNibbles(unsigned char x){
        // code here
        
        //cout<<(x>>4)<<" "<<(x<<4)<<endl;
        return (x>>4)|((x&0xF)<<4);
        
    }
