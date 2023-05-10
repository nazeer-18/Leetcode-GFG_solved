//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long long ans = 0;
        int mini = INT_MAX, cnt=0;
        for(int i = 0; i < N; i++) {
             if(B[i]>=2){
                ans+= A[i]*(B[i]/2)*2;
                if(B[i]%2!=0) B[i]--;
                cnt+=B[i];
                mini=min(mini,A[i]);
            }
        }
        if(cnt%4!=0){
            ans-=mini*2;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends