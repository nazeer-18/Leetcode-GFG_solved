//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        map<char,int>mp;
        int i=0,dist=0,n=s.length(),maxi=0,start=0;
        for(;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]==1) dist++;
            if(dist>k){
                maxi=max(maxi,i-start);
                while(mp[s[start]]!=1){
                    mp[s[start]]--;
                    start++;
                }
                mp[s[start]]--;
                dist--;
                start++;
            }
        }
        if(dist==k) maxi=max(maxi,i-start);
        return (maxi==0)?-1:maxi;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends