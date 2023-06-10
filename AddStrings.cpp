class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.length()-1;
        int n2=num2.length()-1;
        int carry=0;
        int sum;
        int sum1=0;
        string ans;
        while(n1>=0 || n2>=0)
        {
            sum=carry;
            sum1=0;
            if(n1>=0){
                sum=sum+(num1[n1]-48);
                n1--;
            }
            if(n2>=0){
                sum=sum+(num2[n2]-48);
                n2--;
            }
            sum1=sum1+sum%10;
            carry=sum/10;
            ans.push_back(sum1+48);
        }
        if(carry){
            ans.push_back(carry+48);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};