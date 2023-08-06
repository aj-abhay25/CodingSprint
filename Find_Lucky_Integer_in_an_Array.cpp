class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(), arr.end(), greater<int>());        
        int luNum = -1;
        int count = 1;       
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                if (arr[i - 1] == count) {
                    luNum = max(luNum, count);
                }
                count = 1;
            }
        }        
        if (arr.back() == count) {
            luNum = max(luNum, count);
        }        
        return luNum;
    }
};