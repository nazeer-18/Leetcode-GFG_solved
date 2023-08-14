//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int permutationCoeff(int n, int k){
        //Code here
        long long ans=1;
        long long m=1000000007;
        for(int i=n-k+1;i<=n;i++) {ans=(ans*i)%m;}
        return ans;
        //14 12
    }
};


//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        Solution ob;
        int ans = ob.permutationCoeff(n,k);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends