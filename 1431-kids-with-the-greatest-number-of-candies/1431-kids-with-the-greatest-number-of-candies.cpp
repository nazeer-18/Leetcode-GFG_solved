class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = *max_element(candies.begin(),candies.end());
        int size = candies.size(), ans = 0;
        vector<bool> a(size);
        for(int i = 0; i < size; i++) {
            if(candies[i]+extraCandies>=maxi){
                a[i]=true;
            }else a[i]=false;
        }
        return a;
    }
};