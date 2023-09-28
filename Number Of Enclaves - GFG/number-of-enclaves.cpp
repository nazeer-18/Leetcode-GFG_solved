//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void make0(int i,int j,int n,int m,vector<vector<int>> &grid){
      if(i>0 && grid[i-1][j]==1){
          grid[i-1][j]=0;
          make0(i-1,j,n,m,grid);
      }
      if(j>0 && grid[i][j-1]==1){
          grid[i][j-1]=0;
          make0(i,j-1,n,m,grid);
      }
      if(i<n-1 && grid[i+1][j]==1){
          grid[i+1][j]=0;
          make0(i+1,j,n,m,grid);
      }
      if(j<m-1 && grid[i][j+1]==1){
          grid[i][j+1]=0;
          make0(i,j+1,n,m,grid);
      }
  }
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int i =0,j=0,cnt=0,n=grid.size(),m=grid[0].size();
        for(i=0;i<n;i++){
            if(grid[i][0]==1){
                grid[i][0]=0;
                make0(i,j,n,m,grid);
            }
            if(grid[i][m-1]==1){
                grid[i][m-1]=0;
                make0(i,m-1,n,m,grid);
            }
        }
        for(i=0;i<m;i++){
            if(grid[0][i]==1){
                grid[0][i]=0;
                make0(0,i,n,m,grid);
            }
            if(grid[n-1][i]==1){
                grid[n-1][i]=0;
                make0(n-1,i,n,m,grid);
            }
        }
        
        for(i = 0; i < n; i++){
            for(j=0;j<m;j++){
                //cout<<grid[i][j]<<" ";
                if(grid[i][j]==1) cnt++;
            }
            //cout<<endl;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends