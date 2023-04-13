class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()>b.length())
            return addBinary(b,a);
        int carry = 0,i,j=b.length()-1;
        for(i = a.length()-1; i>=0 ; i--) {
            if(b[j]=='1' && a[i]=='1') {
                if(carry==0) {
                    b[j]='0';
                    carry=1;
                }
            }
            else if(b[j]=='0' && a[i]=='0') {
                if(carry==1) {
                    carry = 0;
                    b[j]='1';
                }
            }
            else {
                if(carry==1) {
                    b[j]='0';
                }
                else b[j]='1';
            }
            j--;
        }
        if(carry==0) return b;
        while(j>=0){
            if(b[j]=='1'){
                b[j]='0';
            }
            else {
                b[j]='1';
                carry=0;
                return b;
            }
            j--;
        }
        if(carry==1) b = '1'+b;
        return b;
    }
};