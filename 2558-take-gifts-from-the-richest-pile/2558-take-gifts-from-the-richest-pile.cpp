class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for(int i = 0; i< k; i++){
            sort(gifts.begin(),gifts.end());
            int idx = gifts.size()-1;
            int val = sqrt(gifts[idx]);
            gifts[idx]= val;
        }
        long long sum =0;
        for(int i =0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;
    }
};