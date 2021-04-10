//https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1#
 vector<int> twoOddNum(int nums[], int N)  
    {
        // Code here.
        int x=0;
        vector<int> ans(2,0);
        
        for(int i=0;i<N;i++)
            x^=nums[i];
        
        int set_bit=x^(x&(x-1));
        
        for(int i=0;i<N;i++){
            if(set_bit&nums[i])
                ans[0]^=nums[i];
            else
                ans[1]^=nums[i];
        }
        
        sort(ans.begin(),ans.end(),greater<int>());
        
        return ans;
    }
