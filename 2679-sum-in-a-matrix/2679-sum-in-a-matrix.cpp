class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum = 0, maxi = 0, n = nums.size(),m=0,temp=0;
        for(int i = 0; i < n; i++){
            sort(nums[i].begin(),nums[i].end());
            temp = nums[i].size();
            m = max(m,temp);
        }
        for(int i = 0 ; i < m ; i++) {
            maxi=0;
            for(int j = 0; j < n; j++) {
                if(i>=nums[j].size()) continue;
                maxi = max(maxi,nums[j][i]);
            }
            sum+=maxi;
        }
        return sum;
    }
};