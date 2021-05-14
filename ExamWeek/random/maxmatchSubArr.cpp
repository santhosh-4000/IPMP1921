//https://leetcode.com/problems/maximum-length-of-repeated-subarray/

//
int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        int maxi=0;
        
  //O(n1*n2*max(n1,n2);
        for(int i=0;i<nums1.size();i++){
          //O(n2*(n1+n2))
            for(int j=0;j<nums2.size();j++){
                int k=0;
                
                while(i+k<nums1.size()&&j+k<nums2.size()&&
                     nums1[i+k] == nums2[j+k]){
                    k++;
                }
                maxi=max(maxi, k);
                
            }
        }
        
        return maxi;
    }
