class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i< nums.size(); i++){
            string s = to_string(nums[i]);
            cout<<s<<endl;
            int j=0;
            while(j<s.length()){
                ans.push_back(s[j]-48);
                j++;
            }
        }
     return ans;
    }
    
};