class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        while(i<j){
            if(nums[i]==nums[i+1]) i+=2;
            else return nums[i];
            if(nums[j]==nums[j-1]) j-=2;
            else return nums[j];
        }
        return nums[i];
    }
};