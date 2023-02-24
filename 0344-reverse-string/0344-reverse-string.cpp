class Solution {
public:
    void swap(char &a, char &b) {
        char temp = a;
        a = b;
        b = temp;
    }
    void reverseString(vector<char>& s) {
        for(int i = 0; i < s.size()/2; i++){
            swap(s[i],s[s.size()-i-1]);
        }
    }
};