class Solution {
public:
    void swap(int *a, int *b) {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int k = 0; k < nums.size(); k++) {
            if(nums[k]!=0 && nums[i]==0) {
                swap(&nums[k],&nums[i]);
            }
            if(nums[i]!=0)
            i++;
        }
    }
};