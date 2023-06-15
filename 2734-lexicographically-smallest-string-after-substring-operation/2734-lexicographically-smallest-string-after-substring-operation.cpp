class Solution {
public:
    string smallestString(string s) {
        
        int i = 0,n=s.length();
        while(i<n && s[i]=='a') i++;
        if(i==n) s[n-1]='z';
        for(; i < n; i++) {
            if(s[i]=='a'){
                return s;
            }
            s[i] = (s[i]-'a'-1)+'a';
        }
        return s;
    }
};