class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0,maxi=0;
        for(auto i : gain) sum+=i, maxi=max(maxi,sum);
        return maxi;
    }
};