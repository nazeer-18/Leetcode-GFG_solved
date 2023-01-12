class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = (digits[size(digits)-1]==9)?1:0;
        int sum = (carry==0)?digits[size(digits)-1]+1:0;
        ans.push_back(sum);
        for(int i = size(digits)-2; i>= 0; i--) {
            if(carry!=0) {
                sum =  (carry+digits[i]<10)?digits[i]+carry:0;
                carry = (digits[i]+carry<=9)?0:1;
            }
            else
            sum = digits[i];
            ans.push_back(sum);
        }
        if(carry==1) ans.push_back(1);
        reverse(begin(ans),end(ans));
        return ans;
    }
};