//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int dotcnt=0,temp=0,i=0,n=s.length(),cnt=0;
            if(n>15) return 0;
            bool dot=false,digit=false;
            for(i=0;i<n;i++){
                if(s[i]=='.'){
                    if(i==0 || dotcnt==3 || i==n-1 || dot) return 0;
                    dotcnt++;
                    digit=false;
                    temp=0;
                    dot=true;
                }else if(s[i]>='0' && s[i]<='9'){
                    dot=false;
                    if(!digit) digit=true;
                    else if(temp==0) return 0;
                    temp=temp*10+s[i]-'0';
                    if(temp>255) return 0;
                }else return 0;
            }
            return dotcnt==3;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends