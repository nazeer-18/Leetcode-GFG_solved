class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>maxis (prices.size(),0);
        int maxi = 0;
        for(int i = size(prices)-1; i >= 0; i--) {
            maxi = max(maxi,prices[i]);
            maxis[i] = maxi;
        }
        int ans=0;
        for(int i = 0; i < size(prices); i++) {
            ans = max(ans,maxis[i]-prices[i]);
        }
        return ans;
    }
};