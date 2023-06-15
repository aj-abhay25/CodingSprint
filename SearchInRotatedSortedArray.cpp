class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = (start+end)/2;
            if(nums[mid] == target){
                return mid;
            }
            //left part sorted
            if(nums[start] <= nums[mid]){
                if(nums[start] <= target && target <= nums[mid]){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }

            //right part sorted
            else{
                if(nums[end] >= target && target >= nums[mid]){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};