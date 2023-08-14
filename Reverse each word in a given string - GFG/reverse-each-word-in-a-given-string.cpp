//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int n=s.length(),tmp=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                reverse(s.begin()+tmp,s.begin()+i);
                tmp=i+1;
            }
        }
        reverse(s.begin()+tmp,s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends