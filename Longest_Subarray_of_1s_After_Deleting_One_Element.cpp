class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int slow, fast;
        int k = 1;
        
        for(slow = 0, fast = 0; fast < nums.size(); fast++){
            if(nums[fast] == 0){
                k--;
            }
            if(k < 0 && nums[slow++] == 0){
                k++;
            }
        }
        return (fast-slow-1);
    }
};