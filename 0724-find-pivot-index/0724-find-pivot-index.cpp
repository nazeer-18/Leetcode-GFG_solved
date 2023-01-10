class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> v1 = nums;
        partial_sum(begin(nums),end(nums),begin(nums));
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]-v1[i] == nums[nums.size()-1] - nums[i]) return i;
        }
        return -1;
    }
};