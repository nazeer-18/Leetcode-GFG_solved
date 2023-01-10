class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0,i=0;
        for(auto ele : nums) {
            if(ele<0) neg++;
            if(ele>0) break;
            i++;
        }
        int pos = nums.size()-i;
        return max(neg,pos);
        
    }
};