class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int,greater<int>> s;
        for(int i = 0; i< k; i++){
            s.insert(nums[i]);
        }
        vector<int>ans;
        ans.push_back(*s.begin());
        for(int i = k; i<nums.size(); i++){
            s.insert(nums[i]);
            s.erase(s.lower_bound(nums[i-k]));
            ans.push_back(*s.begin());
        }
        return ans;
    }
};