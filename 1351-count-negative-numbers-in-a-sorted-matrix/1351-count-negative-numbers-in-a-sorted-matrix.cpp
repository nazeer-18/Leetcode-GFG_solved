class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0,j,k;
        for(auto i : grid){
            k = i.size();
            for(j = 0; j < k; j++){
                if(i[j]<0){
                    ans+=k-j;
                    break;
                }
            }
        }
        return ans;
    }
};