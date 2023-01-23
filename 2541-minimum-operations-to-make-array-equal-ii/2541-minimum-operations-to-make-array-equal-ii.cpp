class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long  long op=0,add=0,cntpd=0;
        for(int i = 0; i < nums1.size(); i++) {
            if(nums1[i]==nums2[i]) continue;
            else {
                 if(k==0 || (nums1[i]-nums2[i])%k!=0) return -1;
                if(nums1[i]>nums2[i]) {
                    cntpd+=(nums1[i]-nums2[i])/k;
                   
                }add+=nums1[i]-nums2[i];
                op++;
            }
        }
        if(add==0) return cntpd;
        return -1;
    }
};