class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        char last = ' ';
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ' && last == ' '){

            }
            else if(s[i] == ' '){
                count++;
            }
            last = s[i];
        }
        if(last != ' '){
            count++;
        }
        return count;
    }
};