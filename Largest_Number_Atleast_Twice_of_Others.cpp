class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxValue = 0;
        int secValue = 0;
        int maxIndex = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxValue){
                secValue = maxValue;
                maxValue = nums[i];
                maxIndex = i;
            }
            else if(nums[i] < maxValue && nums[i] > secValue){
                secValue = nums[i];
            }
        }
        if(maxValue >= secValue * 2){
            return maxIndex;
        }
        return -1;
    }
};