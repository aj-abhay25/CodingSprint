class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int late = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'){
                absent++;
                late = 0;
            }
            else if(s[i] == 'L'){
                late++;
            }
            else{
                late = 0;
            }
            if(late == 3){
                return false;
            }
            if(absent == 2){
                return false;
            }
        }
        return true;
    }
};