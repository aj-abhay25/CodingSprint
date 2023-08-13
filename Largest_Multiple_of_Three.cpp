class Solution {
public:
    string largestMultipleOfThree(vector<int>& digits) {
        vector<int> count(10);
        vector<int> mods1 = {1, 4, 7, 2, 5, 8};
        vector<int> mods2 = {2, 5, 8, 1, 4, 7};
        int sum = accumulate(begin(digits), end(digits), 0);
        for (const int digit : digits)
            ++count[digit];
        while (sum % 3 != 0)
            for (int i : sum % 3 == 1 ? mods1 : mods2)
                if (count[i]) {
                    --count[i];
                    sum -= i;
                    break;
                }
        string res;
        for (int digit = 9; digit >= 0; --digit)
            res += string(count[digit], '0' + digit);
        return (res.size() && res[0] == '0') ? "0" : res;
    }
};