class Solution {
public:
    bool isHappy(int n) {
        int temp = 0;
        set<int> s;
        
        while(true){
            temp = 0;
            while(n > 0){
                temp += pow((n%10), 2);
                n = n/10;
            }
            n = temp;
            if(n == 1){
                break;
            }
            else if(s.find(n) != s.end()){
                return false;
            }
            s.insert(n);
        }
        return true;
    }
};