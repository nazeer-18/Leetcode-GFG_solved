//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
 
    vector<int> getPrimes(int n) {
        // code here
        int a[n+1]={0};
        a[0]=1;a[1]=1;
        vector<int> ans(2,-1);
        for(int i =2;i<=sqrt(n);i++){
            if(a[i]==0){
                for(int j=2*i;j<=n;j+=i){
                    a[j]=1;
                }
            }
        }
        int i =2,j=n;
        while(i<j){
            if(a[i]==0 && a[j]==0){
                if(i+j==n){
                    ans[0]=i;ans[1]=j;break;
                }
            }if(i+j>n){
                j--;
            }else i++;
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

        Solution ob;
        vector<int> ptr = ob.getPrimes(N);
        cout << ptr[0]<<" "<<ptr[1] << endl;
    }
    return 0;
}
// } Driver Code Ends