//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/

//O(logn) time and O(1) space
//this below 2 work only if elements are distinct
int findMin(vector<int>& arr) {
        
        int l=0,r=arr.size()-1;
        
  //O(logn)
        while(l<r){
            int m=l+(r-l)/2;
            if(m==0||arr[m-1]<=arr[m]){
                if(arr[m]<arr[r]){
                    r=m;
                }
                else
                    l=m+1;
            }
            else{
                return arr[m];
            }
        }
        
        return arr[l];
    }

//we can minimize above code with same complexity
int findMin(vector<int>& arr) {
        
        int l=0,r=arr.size()-1;
        
        while(l<r){
            int m=l+(r-l)/2;
                if(arr[m]<=arr[r]){
                    r=m;
                }
                else
                    l=m+1;
        }
        
        return arr[l];
    }

//if duplicates are there
//O(n) in worst case time O(logn) if most of elements are distinct
//O(1) space
int findMin(vector<int>& arr) {
        
        int l=0,r=arr.size()-1;
        
        while(l<r){
            int m=l+(r-l)/2;
                //
                if(arr[m]<arr[r]){
                    r=m;
                }
                else if(arr[m]>arr[r])
                    l=m+1;
                else{
                  //this will result in linear time if all
                  //elements are same
                    if(arr[l]==arr[m]){
                        l++,r--;
                    }
                    else{
                        r=m;
                    }
                }
        }
        
        return arr[l];
        
    }
