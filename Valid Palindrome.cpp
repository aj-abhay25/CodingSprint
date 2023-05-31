class Solution {
private:
    bool isAlphanumeric(char ch) {
        return isalnum(ch);
    }

public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start <= end) {
            if (!isAlphanumeric(s[start])) {
                start++;
            } else if (!isAlphanumeric(s[end])) {
                end--;
            } else {
                if (tolower(s[start]) != tolower(s[end])) {
                    return false;
                }
                start++;
                end--;
            }
        }

        return true;
    }
};