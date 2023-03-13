class Solution {
public:
    bool isvowel(char a){
        return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans  = 0;
        for(int i = left; i <= right; i++) {
            if(isvowel(words[i][0]) && isvowel(words[i][words[i].length()-1]))
                ans++;
        }
        return ans;
    }
};