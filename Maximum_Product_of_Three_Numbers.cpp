class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int a = nums[0] * nums[1] * nums[n-1];      //if the first two numbers are negative
        
        int b = nums[n-3] * nums[n-2] * nums[n-1];  //all positive numbers
        return max(a, b);
    }
};