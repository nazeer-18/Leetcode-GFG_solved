class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int a[26] = {0};
        for(int i = 0; i < order.length(); i++) {
            a[order[i]-'a'] = i;
        }
        for(int i = 1; i < words.size(); i++) {
            //if(words[i].length()<words[i-1].length()) return false;
            for(int j = 0; j < min(words[i-1].length(),words[i].length()); j++){
                if(a[words[i][j]-'a']<a[words[i-1][j]-'a'])
                    return false;
                if(a[words[i][j]-'a']>a[words[i-1][j]-'a']){
                    if(i==words.size()-1) return true;
                    break;
                }
            }
        }
        return ((words[words.size()-1].length()>=words[words.size()-2].length())?true: false);
    }
};