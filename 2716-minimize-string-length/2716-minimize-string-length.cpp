class Solution {
public:
    int minimizedStringLength(string s) {
        int a[26]={0};
        int n = s.length(),cnt=0;
        for(int i = 0; i < n; i++) {
            a[s[i]-'a']++;
            if(a[s[i]-'a']==1) cnt++;
        }
        return cnt;
    }
};