class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length()) return false;
        int j=0;
        if(s==t) return true;
        for(int i = 0; i < t.length(); i++) {
            if(s[j]==t[i]) j++;
            if(s[j]=='\0') return true;
        }
        return false;
    }
};