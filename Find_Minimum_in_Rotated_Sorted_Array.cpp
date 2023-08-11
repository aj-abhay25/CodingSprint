class Solution {
public:
    int findMin(vector<int>& nums) {   
        int mid;
        int ans = nums[0];
        int l = 1, r = nums.size()-1;
        
        while(l <= r){
            mid = (l+r) >> 1;            
            if(nums[mid] < nums[0]){
                ans = min(ans, nums[mid]);
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }       
        return ans;
    }
};