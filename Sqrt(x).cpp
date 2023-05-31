class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int s = 1;
        int e = x;
        int ans = -1;

        while(s<=e){
            long long int mid = s + (e-s)/2;
            long long int sqr = mid*mid;

            if(sqr == x){
                return mid;
            }
            else if(sqr < x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
        
    }
};