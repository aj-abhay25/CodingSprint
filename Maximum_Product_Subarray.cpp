class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (!nums.size()){
            return 0;
        }
        int ans = nums[0];
        int large = ans, small = ans;
        
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] < 0) {
                swap(large, small);
            }
            large = max(nums[i], nums[i] * large);
            small = min(nums[i], nums[i] * small);
            ans = max(large, ans);
        }
        return ans;
    }
};