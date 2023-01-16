class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        int i =0, j = 0;
        vector<int> ans;
        while(i<size(nums1) && j < size(nums2)) {
            if(nums1[i]==nums2[j]) {
                 ans.push_back(nums1[i]);i++;j++;
            }
            else if(nums1[i]>nums2[j]) {
                j++;
            }
            else i++;
        }
        return ans;
    }
};