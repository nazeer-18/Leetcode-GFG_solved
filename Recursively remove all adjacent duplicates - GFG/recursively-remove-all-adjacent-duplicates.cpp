//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        // code here
        int n = s.length(),i=0,cnt=0;
        string ans;
        while(i<n){
            cnt=1;
            while(i<n-1 && s[i]==s[i+1]){
                i++;
                cnt++;
            } 
            if(cnt==1) ans+=s[i];
            i++;
        }
        //cout<<ans<<endl;
        if(ans==s) return s;
        return rremove(ans);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends