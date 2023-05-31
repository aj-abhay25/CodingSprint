class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        bool point = false;

        for(int i = s.length()-1; i>=0; i--){

            if(s[i]==' ' && point==true){
                break;
            }

            else if(s[i] != ' '){
                point = true;
                ans = ans + 1;
            }

        }
        return ans;
        
    }
};