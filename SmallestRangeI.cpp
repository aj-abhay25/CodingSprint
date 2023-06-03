class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int minimum = nums[0];
        int maximum = nums[0];

        for(int i = 0; i < nums.size(); i++){
            minimum = min(nums[i], minimum);
            maximum = max(nums[i], maximum);
        }

        minimum = minimum + k;
        maximum = maximum - k;

        return max(0, maximum - minimum);
    }
};