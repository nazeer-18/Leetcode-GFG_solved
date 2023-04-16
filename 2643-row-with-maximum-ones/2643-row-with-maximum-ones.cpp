class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int a=0,b=0,maxi=0;
        for(int i = 0; i < mat.size(); i++) {
            int cnt= 0;
            sort(mat[i].begin(),mat[i].end());
            for(int j = 0; j < mat[i].size(); j++)
                if(mat[i][j]==1) {
                    cnt=mat[i].size()-j;
                    break;
                }
            if(cnt>maxi) {
                a=i;
                b=cnt;
                maxi = cnt;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};