class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0){
            return 1;
        }
        if (n == 1){
            return 10;
        }
        int ans = 10;
        for (int i = 0, j = 9; i < n - 1; i++){
            j *= (9 - i);
            ans += j;
        }
        return ans;
    }
};