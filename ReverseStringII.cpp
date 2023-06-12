class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i = 0; i < n; i+=2*k){
            if((n-i)<k){
                reverse(s.begin()+i, s.end()+i+k);
            }
            else{
                reverse(s.begin()+i, s.begin()+i+k);
            }
        }
        return s;
    }
};