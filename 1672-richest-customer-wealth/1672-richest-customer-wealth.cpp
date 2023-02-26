class Solution {
public:
    int accumulate(vector<int> a){
        int sum = 0;
        for(vector<int> :: iterator i = a.begin(); i < a.end(); i++)         {
            sum+=*i;
        }
        return sum;
    }
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i = 0; i < accounts.size(); i++){
            ans = max(ans,accumulate(accounts[i]));
        }
        return ans;
    }
};