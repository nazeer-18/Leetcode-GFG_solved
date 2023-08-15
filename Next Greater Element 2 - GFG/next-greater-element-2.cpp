//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& a) {
        // code here
        int i=0,maxi=a[0],ind=0;
        for(i=0;i<n;i++){
            if(a[i]>maxi){
                maxi=a[i];
                ind=i;
            }
        }
        stack<int>st;
        for(;ind>=0;ind--){
            while(!st.empty() && st.top()<=a[ind]) st.pop();
            st.push(a[ind]);
        }
        vector<int>v(n,0);
        for(i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=a[i]) st.pop();
            if(st.empty()) v[i]=-1;
            else v[i]=st.top();
            st.push(a[i]);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends