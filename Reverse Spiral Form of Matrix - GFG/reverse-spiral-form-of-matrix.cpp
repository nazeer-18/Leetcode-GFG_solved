//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int n, int m, vector<vector<int>>&a)  {
        // code here
        int rowStart=0,rowEnd=n-1,colStart=0,colEnd=m-1;
        vector<int> ans;
        while(rowStart<=rowEnd && colStart<=colEnd){
            for(int i = colStart; i<=colEnd && rowStart<=rowEnd; i++){
                ans.push_back(a[rowStart][i]);
            }
            rowStart++;
            for(int i = rowStart; i<=rowEnd && colStart<=colEnd; i++){
                ans.push_back(a[i][colEnd]);
            }
            colEnd--;
            for(int i = colEnd; i>=colStart && rowStart<=rowEnd ; i--){
                ans.push_back(a[rowEnd][i]);
            }
            rowEnd--;
            for(int i = rowEnd; i>= rowStart && colStart<=colEnd; i--){
                ans.push_back(a[i][colStart]);
            }
            colStart++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends