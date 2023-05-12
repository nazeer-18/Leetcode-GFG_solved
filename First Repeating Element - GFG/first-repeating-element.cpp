//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int a [1000001], ans = n+1;
        for(int i = 0; i < 1000001 ; i++){
            a[i] = -1;
        }
        for(int i = 0; i < n; i++) {
            if(a[arr[i]]==-1){
                a[arr[i]] = i+1;
            }else{
                ans = min(ans,a[arr[i]]);
            }
        }
        return (ans==n+1)?-1:ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends