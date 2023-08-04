//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> primeDivision(int n){
        // code here
        int a[n]={0},i=2,j=0;
        for(;i<sqrt(n);i++){
            if(a[i]==0){
                for(j=2*i;j<n;j+=i) a[j]=1;
            }
        }
        i=2;
        vector<int>ans;
        for(;i<=n/2;i++){
            if(a[i]==0 && a[n-i]==0){
                ans.push_back(i);
                ans.push_back(n-i);
                return ans;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends