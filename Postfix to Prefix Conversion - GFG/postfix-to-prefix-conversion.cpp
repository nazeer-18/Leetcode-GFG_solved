//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string p) {
        // Write your code here
        stack<string> s;
        int i = 0, n= p.length();
        string temp,f,se;
        while(i<n){
            temp=p[i];
            if(p[i]=='+' || p[i]=='-' || p[i]=='*' || p[i]=='/' || p[i]=='%'){
                f=s.top();
                s.pop();
                se=s.top();
                temp+= (se+f);
                s.pop();
            }
            s.push(temp);
            i++;
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
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends