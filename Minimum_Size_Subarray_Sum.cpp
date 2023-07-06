class Solution {
 public:
  int minSubArrayLen(int s, vector<int>& nums) {
    int ans = INT_MAX;
    int sum = 0;

    for (int l = 0, r = 0; r < nums.size(); ++r) {
      sum += nums[r];
      while (sum >= s) {
        ans = min(ans, r - l + 1);
        sum -= nums[l++];
      }
    }

    if (ans < INT_MAX) {
      return ans;
    } 
    else {
      return 0;
    }
  }
};