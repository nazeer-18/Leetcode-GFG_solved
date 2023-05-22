class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i : nums) mp[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto [a,b]: mp) pq.push({b,a});
        vector<int> ans;
        while(k){
            k--;
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};