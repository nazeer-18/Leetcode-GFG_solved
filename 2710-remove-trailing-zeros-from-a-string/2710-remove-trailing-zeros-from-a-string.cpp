class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.length()-1;
        while(i>=0 && num[i]=='0') i--;
        string ans;
        for(int j = 0; j <= i; j++){
            ans+= num[j];
        }
        return ans;
    }
};