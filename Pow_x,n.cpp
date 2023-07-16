class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }        
        if (n < 0) {
            if (n == INT_MIN) {
                n += 1;
                return 1 / (x * myPow(x, -n));
            } else {
                return 1 / myPow(x, -n);
            }
        }        
        if (n & 1) {
            return x * myPow(x, n - 1);
        }        
        return myPow(x * x, n / 2);
    }
};