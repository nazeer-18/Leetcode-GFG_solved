class Solution {
public:
    string reverseWords(string s) {
        int sp = 0;
        for(int i = 0; i <= s.size(); i++) {
            if(s[i]==' ' || s[i]=='\0'){
                reverse(s.begin()+sp,s.begin()+i);
                sp = i+1;
            }
        }
        return s;
    }
};