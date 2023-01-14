class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxisum=nums[0];
        for(int i = 0; i < size(nums); i++) {
             sum = sum + nums[i];
            maxisum = max(maxisum,sum);
            if(sum<0) sum=0;
        }
        return maxisum;
    }
};