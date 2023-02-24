class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans;
        int  a = 0, b = 0;
        if(r*c!=mat.size()*mat[0].size()) return mat;
        for(int i = 0; i< r; i++){
            vector<int> temp;
            for(int j = 0; j < c; j++){
                if(b==mat[a].size()) {
                    a++;
                    b=0;
                }
                temp.push_back(mat[a][b]);
                b++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};