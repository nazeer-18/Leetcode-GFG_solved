class Solution {
public:
    char findTheDifference(string s, string t) {
        int ans = t[t.length()-1]-'a';
        for(int i  = 0; i < s.length(); i++){
            ans^= (s[i]-'a');
            ans^= (t[i]-'a');
        }
        return ans+'a';
    }
};