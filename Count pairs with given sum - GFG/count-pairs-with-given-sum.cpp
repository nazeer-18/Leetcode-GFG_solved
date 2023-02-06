//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        //for(int i =0;i<n;i++) cout<<arr[i]<<" ";
        int i =0,j=n-1,count=0;
        while(i<=j){
            if(arr[i]+arr[j]==k){
                int m=1,o=1;
                while(i<n-1 && arr[i]==arr[i+1]){
                    m++;
                    i++;
                }
                while(j>0 && arr[j]==arr[j-1]){
                    o++;
                    j--;
                }
                if(arr[i]==arr[j]){
                    count+=(m*(m-1)/2);
                }
                else
                count+=(m*o);
                //cout<<m<<o<<count<<endl;
                i++;j--;
            }
            else if(arr[i]+arr[j]>k){
                j--;
            }
            else i++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends