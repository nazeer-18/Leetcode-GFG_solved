//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string c[], string s)
    {
        // code here
        int i=0,j=0,len=0,ls=s.length(),k=0;
        vector<vector<string>> v(ls);
        for(i=0;i<n;i++){
            len = c[i].length();
            k=0;
            for(j=0;j<len && k<ls;j++){
                if(c[i][j]==s[k]){
                    v[j].push_back(c[i]);
                    k++;
                }
                else break;
            }
        }
        for(i=0;i<ls;i++){
            if(v[i].size()==0) v[i].push_back("0");
            sort(v[i].begin(),v[i].end());
            for(j=1;j<v[i].size();j++){
                if(v[i][j]==v[i][j-1]){
                    v[i].erase(v[i].begin()+j);
                    j--;
                }
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < ans.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends