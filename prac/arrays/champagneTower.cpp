//https://leetcode.com/problems/champagne-tower/submissions/

//O(i^2) time and spzce
 double champagneTower(int poured, int query_row, int query_glass) {
        
        int i=query_row;
        vector<double> glass((i+2)*(i+3)/2, 0.0);
        
        int idx=0; glass[idx]=poured;
        
        for(int row=1;row<=i+1;row++){
            for(int col=1;col<=row;col++,idx++){
                double X=glass[idx];
                glass[idx]=(X>=1.0f)?(1.0f):(X);
                X=(X>=1.0f)?(X-1):(0);
                glass[idx+row]+=X/2;
                glass[idx+row+1]+=X/2;
            }
        }
        
        return glass[i*(i+1)/2 + query_glass] ;
    }
