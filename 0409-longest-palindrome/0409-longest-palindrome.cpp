class Solution {
public:
    int longestPalindrome(string s) {
        int a[256] = {0};
        for(int i = 0; i< s.length(); i++){
            a[s[i]]++;
        }
        int ans= 0;
        for(int i = 0; i < 256; i++) {
            if(a[i]%2!=0){
                ans+=a[i]-1;
                if(ans%2==0) ans++;
            }else ans+=a[i];
        }
        return ans;
    }
};