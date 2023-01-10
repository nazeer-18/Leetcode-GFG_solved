class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long ans=0;
        for(auto i:costs) {
            if(i<=coins) {ans++;coins-=i;}
            else break;
        }
        return ans;
    }
};
