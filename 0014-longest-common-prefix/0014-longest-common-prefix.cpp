class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(auto i : strs) {
            int j = 0;
            while(j<ans.length() && j<i.length()) {
                if(i[j]==ans[j])
                    j++;
                else ans=ans.substr(0,j);
                if(ans.length()==0) return ans;
            }
            ans = ans.substr(0,j);
        }
        return ans;
    }
};