class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int  ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            ans+=nums[i];
            while(nums[i]){
                ans-=nums[i]%10;
                nums[i]/=10;
            }
        }
        return ans;
    }
};