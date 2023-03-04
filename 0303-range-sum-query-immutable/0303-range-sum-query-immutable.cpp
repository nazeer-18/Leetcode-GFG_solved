class NumArray {
public:
    vector<int>nums;
    NumArray(vector<int>& nums) {
        partial_sum(nums.begin(),nums.end(),nums.begin());
        this->nums = nums;
    }
    int sumRange(int left, int right) {
        if(left==0) return nums[right];
        return nums[right]-nums[left-1];   
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */