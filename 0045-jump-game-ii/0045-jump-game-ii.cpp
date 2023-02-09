class Solution {
public:
    int jump(vector<int>& nums) {
        int i = 0,ans=0,end=0,maxJmp=0;
        for(i = 0; i < nums.size()-1; i++) {
            maxJmp = max(maxJmp,i+nums[i]);
            if(i==end) {
                ans++;
                end = maxJmp;
            }
        }
    return ans;
    }
};