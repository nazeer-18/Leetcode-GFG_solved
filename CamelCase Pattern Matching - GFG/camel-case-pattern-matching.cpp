//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> s, string p) {
        // code here
        vector<string> ans;
        int i, j ,k,len,plen=p.length();
        for(i = 0; i < N; i++) {
            k = 0;
            len=s[i].length();
            for(j = 0; j < len && k<plen; j++) {
                if(s[i][j]==p[k]) k++;
                else if(s[i][j]>='A' && s[i][j]<='Z') break;
            }
            if(k==plen) ans.push_back(s[i]);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0) ans.push_back("-1");
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends