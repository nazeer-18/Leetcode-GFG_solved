class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size(),mid =(low+high)/2;
        while(low!=high){
            mid = (low+high)/2;
            if(nums[mid]==target) return mid;
             else if(mid==low || mid == high){
                return nums[mid]>=target?mid:mid+1;
            }
            else if(nums[mid]>target){
                high = mid;
            } else{
                low = mid;
            }
        }
        return nums[mid]>=target?mid:mid+1;
    }
};