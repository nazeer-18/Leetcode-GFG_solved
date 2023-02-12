class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        long long ans=0;
        while(i<=j){
            if(i==j){
                ans+=nums[i];
                return ans;
            }
            string s1 = to_string(nums[i]),s2=to_string(nums[j]);
            s1+=s2;
            long long val = stoi(s1);
            ans+=val;
            i++;j--;
        }
        return ans;
    }
};