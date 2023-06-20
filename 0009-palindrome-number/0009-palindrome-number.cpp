class Solution {
public:
    bool isPalindrome(int x) {
        string s1 = to_string(x),s2 =s1;
        reverse(s1.begin(),s1.end());
           if(s2==s1) return true;
        return false;
    }
};