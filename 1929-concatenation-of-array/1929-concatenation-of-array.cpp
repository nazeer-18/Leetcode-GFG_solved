class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        int k;
        for(int i = 0; i< nums.size()*2;i++) {
            if(i<nums.size())
                k=i;
            else k = i-nums.size();
                v.push_back(nums[k]);
        }
        return v;
    }
};