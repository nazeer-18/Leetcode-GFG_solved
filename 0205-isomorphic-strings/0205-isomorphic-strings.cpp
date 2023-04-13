class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a[256],b[256];
        for(int  i = 0; i< 256; i++){
            a[i] = b[i] = -1;
        }
        for(int i = 0; i<s.length(); i++){
            if(a[s[i]]==-1){
                if(b[t[i]]==-1){
                    a[s[i]]=t[i];
                    b[t[i]] = s[i];
                }else return false;
            }else{
                if(a[s[i]]==t[i]) continue;
                return false;
            }
        }
        return true;
    }
};