class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> c(A.size(),0);
        vector<int> ans;
        for(int i = 0; i < A.size(); i++) {
            c[A[i]-1]++;
            c[B[i]-1]++;
            if(A[i]==B[i]) {
                if(i==0) ans.push_back(1);
                else {
                    ans.push_back(ans[i-1]+1);
                }
            }
            else{
                if(i==0) ans.push_back(0);
                else{
                 ans.push_back(ans[i-1]);
                if(c[A[i]-1]==2) ans[i]++;
                if(c[B[i]-1]==2) ans[i]++;   
                }
            }
        }
        return ans;
    }
};