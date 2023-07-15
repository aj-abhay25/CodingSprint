class Solution {
 public:
  int nthUglyNumber(int n) {
    vector<int> uglyNums{1};
    int i = 0;
    int j = 0;
    int k = 0;

    while (uglyNums.size() < n){
        const int next2 = uglyNums[i] * 2;
        const int next3 = uglyNums[j] * 3;
        const int next5 = uglyNums[k] * 5;
        const int next = min({next2, next3, next5});
        if (next == next2){
            ++i;
        }
        if (next == next3){
            ++j;
        }
        if (next == next5){
            ++k;
        }
        uglyNums.push_back(next);
    }
    return uglyNums.back();
  }
};