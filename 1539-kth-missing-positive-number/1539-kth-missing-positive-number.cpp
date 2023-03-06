class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int idx = 0, temp=1, i = 0;
        while(i< arr.size() && k){
            if(arr[i]==temp){
                i++;
            }
            else{
                k--;
            }
            temp++;
        }
        return temp+k-1;
    }
};