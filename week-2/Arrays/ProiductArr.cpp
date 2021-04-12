//https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1#
//O(n) time and space
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here    
    long long int prod=1;
    vector<long long int> product(n,1);
    
    for(int i=0;i<n;i++){
        product[i]=prod;
        prod*=nums[i];
    }
    prod=1;
    for(int i=n-1;i>=0;i--){
        product[i]*=prod;
        prod*=nums[i];
    }
    
    return product;
}
