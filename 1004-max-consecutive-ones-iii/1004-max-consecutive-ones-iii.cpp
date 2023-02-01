class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0,zerocnt=0,ans=k;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j]==0) {
                zerocnt++;
            }
            while(zerocnt>k){
                if(nums[i]==0)
                {    
                    zerocnt--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};