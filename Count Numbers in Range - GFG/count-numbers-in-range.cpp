//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
  bool isPrime(int a){
      if(a<2) return false;
      if(a==2) return true;
      if(a%2==0) return false;
      for(int i=3;i<=sqrt(a);i++){
          if(a%i==0) return false;
      }
      return true;
  }
    int count3DivNums(long long l, long long r) {
        // code here
       l=int(sqrt(l)+0.9999);r=sqrt(r);
       int ans=0;
       for(int i = l;i<=r;i++){
           if(isPrime(i)) ans++;
       }
       return ans;
    }
    // 4 100
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long L,R;
        
        cin>>L>>R;

        Solution ob;
        cout << ob.count3DivNums(L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends