class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int ans = 0,idx=0,temp=0;
        sort(nums.begin(),nums.end());
        sort(divisors.begin(),divisors.end());
        // for(int i = 0; i < nums.size();i++) cout<<nums[i]<<" ";
        // cout<<endl;
        // for(int i = 0; i < divisors.size();i++) cout<<divisors[i]<<" ";
        // cout<<endl;
        for(int i = 0; i < divisors.size(); i++) {
            int cnt = 0;
            for(int j = 0; j < nums.size(); j++) {
                if(i>0 && divisors[i]==divisors[i-1]) {
                    if(divisors[idx]==divisors[i]) temp++;
                    break;
                }
                if(nums[j]%divisors[i]==0) cnt++;
            }
            if(ans==cnt) temp++;
            else if(cnt>ans) {
                ans = cnt;
                idx=i;
                temp=0;
            }
            //cout<<cnt<<" ";
        }
       return divisors[idx];
    }
};