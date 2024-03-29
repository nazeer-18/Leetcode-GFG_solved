//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        sort(arr,arr+n);
        int i = 0;
        string ans = arr[0];
        int j=0,len = ans.length();
        for(i=1;i<n; i++) {
            for(j=0;j <len; j++) {
                if(arr[i][j]!=ans[j]) {
                    ans = ans.substr(0,j);
                    break;
                }
            }
        }
        return ans==""?"-1":ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends