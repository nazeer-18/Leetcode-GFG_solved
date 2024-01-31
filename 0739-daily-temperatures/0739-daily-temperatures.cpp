class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>> st;
        int n=t.size();
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=t[i]) st.pop();
            if(!st.empty()) ans.push_back(st.top().second-i);
            else ans.push_back(0);
            st.push({t[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};