//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        int i = 0,j = 0, k = 0, n = s.length(),temp=0,cnt=0,ans=0;
        string str;
        for(; i < n; i++){
            j = i; k = n-1,cnt=0,temp=k;
            while(j<k){
                if(s[j]==s[k]){
                    cnt+=2;
                    j++;k--;
                }else{
                    j=i;temp--;k=temp;
                    while(j<k && s[j]!=s[k]){
                        k--;
                    }
                    cnt=0;
                }
            }
            if(j==k) cnt++;
            if(cnt>ans) str = s.substr(i,cnt);
            ans = max(ans,cnt);
            //cout<<ans<<" "<<cnt<<" "<<str<<endl;
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends