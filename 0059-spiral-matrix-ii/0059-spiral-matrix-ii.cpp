class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int rowStart = 0, colStart = 0, rowEnd = n-1, colEnd = n-1,cnt=1;
        while(rowStart<=rowEnd && colStart<=colEnd) {
            for(int i = colStart; i <= colEnd; i++) {
                ans[rowStart][i]=cnt;
                cnt++;
            }
            rowStart++;
            for(int i = rowStart; i <= rowEnd; i++) {
                ans[i][colEnd]=cnt;
                cnt++;
            }
            colEnd--;
            for(int i = colEnd; i >= colStart;i--) {
                ans[rowEnd][i]=cnt;
                cnt++;
            }
            rowEnd--;
            for(int i = rowEnd; i >= rowStart; i--) {
                ans[i][colStart]=cnt;
                cnt++;
            }
            colStart++;
        }
        return ans;
    }
};