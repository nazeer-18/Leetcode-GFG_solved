class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i = 0; i< nums.size()-1; i++) {
            if(nums[i]!=nums[i+1]) {
                k++;
            }
            else{
                   nums[i]=101;
            }
        }
        sort(nums.begin(),nums.end());
        return k;
    }
};