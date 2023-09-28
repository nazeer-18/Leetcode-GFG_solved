//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string p) {
        // Write your code here
        stack<string> s;
        int n = p.length(),i=n-1;
        string temp;
        for(;i>=0;i--){
            if(p[i]=='+' || p[i]=='-' || p[i]=='*' || p[i]=='/' || p[i]=='%') {
                temp = "("+ s.top();
                s.pop();
                temp += p[i] + s.top() + ")";
                s.pop();
                s.push(temp);
            }else{
                temp = p[i];
                s.push(temp);
            }
        }
        return s.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends