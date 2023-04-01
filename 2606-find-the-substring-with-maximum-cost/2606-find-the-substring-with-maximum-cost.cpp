class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        vector<int> v(27,0);
        for(int i  = 1; i < 27; i++) {
            v[i] = i;
        }
        for(int i  = 0; i < vals.size(); i++) {
            v[chars[i]-'a'+1] = vals[i];
        }
        int ans = 0,temp=0;
        for(int i = 0;i<s.length(); i++) {
            if(temp<0){
                temp=0;
            }
            temp+=v[s[i]-'a'+1];
            ans = max(ans,temp);
        }
        return ans;
    }
};