//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        // Your code goes here
        int rowStart=0,rowEnd=n-1,colStart=0,colEnd=m-1;
        while(rowStart<rowEnd || colStart<colEnd){
            for(int i = colStart; i<=colEnd && rowStart<=rowEnd; i++){
                if(k==1) return a[rowStart][i];
                k--;
            }
            rowStart++;
            for(int i = rowStart; i<=rowEnd && colStart<=colEnd; i++){
                if(k==1) return a[i][colEnd];
                k--;
            }
            colEnd--;
            for(int i = colEnd; i>=colStart && rowStart<=rowEnd ; i--){
                if(k==1) return a[rowEnd][i];
                k--;
            }
            rowEnd--;
            for(int i = rowEnd; i>= rowStart && colStart<=colEnd; i--){
                if(k==1) return a[i][colStart];
                k--;
            }
            colStart++;
        }
        return -1;
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends