class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = s.size(), j = t.size();
        i--; 
        j--;
        while(i >= 0 && j >= 0){
            if(s[i] == t[j]){
                i--;
                j--;
            }
            else{
                j--;
            }
        }
        if(i >= 0){
            return false;
        }
        return true;
    }
};