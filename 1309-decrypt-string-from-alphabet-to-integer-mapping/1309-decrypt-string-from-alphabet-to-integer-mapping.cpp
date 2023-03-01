class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i = s.length()-1; i>=0; i--){
            if(s[i]=='#'){
                int temp = ((s[i-2]-'0')*10 + s[i-1]-'0');
                ans += ('a'+temp-1) ;
                i-=2;
            }else{
                ans += (s[i]-'1')+'a';
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};