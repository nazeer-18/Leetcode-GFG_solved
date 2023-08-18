//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string s, int k) {
        // code here
        int i=0,cnt=0,n=s.length(),dist=0;
        map<char,int> mp;
        for(i =0;i<k;i++) {
            mp[s[i]]++;
            if(mp[s[i]]==1) dist++;
        }
        if(dist==k-1) cnt++;
        for(i;i<n;i++){
            if(mp[s[i-k]]==1) dist--;
            mp[s[i-k]]--;
            mp[s[i]]++;
            if(mp[s[i]]==1) dist++;
            if(dist==k-1) cnt++;
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends