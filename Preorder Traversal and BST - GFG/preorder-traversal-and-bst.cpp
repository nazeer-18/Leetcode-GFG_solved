//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int canRepresentBST(int a[], int n) {
        // code here
        stack<pair<int,int>>st;
        st.push({0,INT_MAX});
        int i= 0,maxi,mini;
        while(!st.empty() && i<n){
            mini=st.top().first;
            maxi=st.top().second;
            st.pop();
            if(a[i]>=mini && a[i]<=maxi){
                st.push({a[i]+1,maxi});
                st.push({mini,a[i]-1});
                i++;
            }
        }
        if(i==n) return true;
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        Solution ob;
        cout << ob.canRepresentBST(arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends