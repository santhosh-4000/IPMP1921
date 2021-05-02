//https://leetcode.com/contest/biweekly-contest-51/problems/maximum-element-after-decreasing-and-rearranging/

//
int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());//O(nlogn)
        
        int x=1;
      //O(n)
        for(int i=0;i<arr.size();i++){
            if(x<=arr[i]){
                arr[i]=x;
                x++;
            }
        }
        
        return arr[arr.size()-1];
    }
