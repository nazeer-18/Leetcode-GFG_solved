class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0,k = 0;
        int median = INT_MIN;
        if((m+n)==1) return (i==n)?nums2[0]:nums1[0];
        while(i<n && j < m) {
            if(k==(m+n)/2-1 || k==(m+n)/2){
                if((m+n)%2==0){
                    median = ((median==INT_MIN)?0:median) + min(nums1[i],nums2[j]);
                }
                else{
                    if(median!=INT_MIN) return median;
                }
            }
            if(k==(m+n)/2){
                if(median==INT_MIN) median = min(nums1[i],nums2[j]);
                return ((m+n)%2!=0)?median:median/2.000;
            }
            if(nums1[i]<nums2[j])
                i++;
            else
                j++;
            // increment k
            k++;   
        }
        //even case and first median is found 
        if(median!=INT_MIN){
            return (i==n)?((median+nums2[j])/2.000):((median+nums1[i])/2.000);   
        }
        //odd case and median is to be found
        if((m+n)%2!=0){
            return  (i==n)?nums2[(n+m)/2-n]:nums1[(n+m)/2-m];
        }
        //even case and both medians to be found 
        return (i==n)?(nums2[(n+m)/2-n-1]+nums2[(n+m)/2-n])/2.000:(nums1[(n+m)/2-m-1]+nums1[(n+m)/2-m])/2.000;
    }
};