class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int c1 = 0, c2 = 0;
        int ans = 0;       
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        while(c1 < g.size() && c2 < s.size()){
            if(s[c2] >= g[c1]){
                ans++;
                c1++;
                c2++;
            }
            else{
                c2++;
            }
        }        
        return ans;
    }
};