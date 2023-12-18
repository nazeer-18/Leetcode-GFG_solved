class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int m,f=-1,s=-1,l=0,h=nums.size()-1;
        while(l<=h){
            m=l+(h-l)/2;
            if(nums[m]==target){
                break;
            }
            else if(nums[m]<target){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        if(l>h) goto x;
        s=m;
        while(m>=0 && nums[m]==target) m--;
        while(s<nums.size() && nums[s]==target) s++;
        s--;
        f=m+1;
        if(s==-1) f=s;
        x: return vector<int> {f,s};
    }
};