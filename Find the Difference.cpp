class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        for(int i = 0; i < t.length(); i++){
            sum = sum + t[i];
        }

        for(int i = 0; i < s.length(); i++){
            sum = sum - s[i];
        }
        return (char)sum;
        
    }
};