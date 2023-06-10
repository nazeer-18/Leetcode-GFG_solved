class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int cnt=1,ans=1,n=s.length(),j=0;
        bool flag = false;
        for(int i = 1; i < n ; i++){
            if(s[i]==s[i-1]) {
                if(flag){
                    ans=max(ans,cnt);
                    cnt = i-j;
                }
                else{
                    flag=true;
                }
                j=i;
            }
            cnt++;
        }
        return max(cnt,ans);
    }
};