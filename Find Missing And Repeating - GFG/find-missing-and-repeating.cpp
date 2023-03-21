//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *a = new int[2];
        for(int i = 0; i<n-1;i++) {
            int d=arr[i]-arr[i+1];
            if(d==0) {
                a[0]= arr[i];
            }
            else if(d==-2){
                a[1]=(arr[i]+1);
            }
        }
        if(a[1]==0)
            if(arr[0]==1)
                a[1]=n;
            else
                a[1]=1;
        
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends