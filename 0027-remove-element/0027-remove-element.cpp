class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0, i = 0, n = nums.size(),k=n-1;
        for(; i <=k; i++) {
            if(nums[i]==val) {
                ans++;
                swap(nums[i],nums[k]);
                i--;
                k--;
            }
        }
        cout<<n-ans<<endl;
        return n-ans;
    }
};