//sorting
//O(nlogn) time and O(1) space
//https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/

int findKthLargest(vector<int>& nums, int k) {
        
        if(k>nums.size())
            return -1;
        
        sort(nums.begin(), nums.end());
        
        return nums[nums.size()-k];
        
  }

//using heap
//O(n+ klogn) time O(1) space
void heapify(vector<int> &arr, int i, int n){
        int l,r,largest=i;
        l=(2*i+1<n)?2*i+1:-1;
        r=(2*i+2<n)?2*i+2:-1;
        
        if(l!=-1 && arr[l]>arr[largest])
            largest=l;
        if(r!=-1 && arr[r]>arr[largest])
            largest=r;
        
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,largest,n);
        }
        
    }
    
    
    int findKthLargest(vector<int>& nums, int k) {
        
        int n=nums.size();
        
       for (int i = n / 2 - 1; i >= 0; i--)
        heapify(nums,i,n);
        
        for (int i = n - 1; i >= n-k; i--) {
        swap(nums[0], nums[i]);
        heapify(nums, 0, i);  
    }
        
        for(auto &i: nums)
            cout<<i<<" ";
        cout<<endl;
        
        return nums[n-k];
        
    }
