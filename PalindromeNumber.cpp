class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0){
            return true;
        }

        if(x<0 || x%10==0){
            return false;
        }

        int temp = x;
        long long int rev = 0;

        while(temp>0){
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp/10;
        }

        // if(x==rev){
        //     return true;
        // }
       
        // else{
        //     return false;
        // }
        return x==rev;
        
    }
};