class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        for(int i = num.size() - 1; i >= 0 ; i--) {
            if(num[i]+(k%10)+carry>9){
                num[i] = num[i]+k%10+carry-10;
                carry = 1;
            }
            else{
                num[i] += k%10+carry;
                carry=0;
            }
            k/=10;
        }
        reverse(num.begin(),num.end());
        while(k){
            if(k%10 + carry>9){
                num.push_back(k%10+carry-10);
                carry = 1;
            }else{
                num.push_back(k%10+carry);
                carry=0;
            }
            k/=10;
        }
        if(carry!=0) num.push_back(carry);
        reverse(num.begin(),num.end());
        return num;
    }
};