class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 1, i =1, n = nums.size();
        while(i<n) {
            if(nums[i]==nums[i-1]) cnt++;
            else cnt=1;
            if(cnt>n/2) return nums[i-1];
            i++;
        }
        return nums[n-1];
    }
};