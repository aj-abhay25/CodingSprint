class Solution {
public:
    vector <vector<int>> ans;
    void res(vector<int>& nums, int i){
        if(i == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j = i; j < nums.size(); j++){
            swap(nums[i], nums[j]);
            res(nums, i + 1);
            swap(nums[i], nums[j]);        //backtrack
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        res(nums, 0);
        return ans;
    }
};