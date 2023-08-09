class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int res = 0, m = 0, count = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 1) {
                k--;
                count = 0;
            }
            while (k == 0) {
                k += nums[m++] & 1;
                count++;
            }
            res += count;
        }
        return res;
    }
};