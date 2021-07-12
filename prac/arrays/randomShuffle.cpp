//https://leetcode.com/submissions/detail/521168208/

//O(n) time and space
class Solution {
    vector<int> arr,arr_rand;
public:
    Solution(vector<int>& nums) {
        arr=nums;
        arr_rand=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        arr_rand=arr;
        return arr_rand;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        
        for(int i=arr_rand.size()-1;i>=0;i--){
            int j=rand()%(i+1);
            swap(arr_rand[i], arr_rand[j]);
        }
        
        return arr_rand;
    }
};
