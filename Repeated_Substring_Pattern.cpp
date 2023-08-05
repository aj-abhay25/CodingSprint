class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 1; i <= s.size()/2; i++){
            int j = 0;
            while(j + i <= s.size() && s.substr(j, i) == s.substr(0, i)){
                j += i;
            }
            if(j == s.size()){
                return true;
            }
        }
        return false;
    }
};