//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> helper(int i,int j,int n,int s){
        vector<int> temp;
        temp.push_back(4*i*n+j+1);
        int t=2,k,x=i,y=j;
        while(x>=0 && y>=0 && x<4*n && y<4*n && t<n*4){
            for(k=1;k<=t;k++){
                if(s==1) x--;
                else x++;
                if(x<0 || x>=4*n) return temp;
                temp.push_back(4*x*n+y+1);
            }
            for(k=1;k<=t;k++){
                if(s==1) y++;
                else y--;
                if(y<0 || y>=4*n) return temp;
                temp.push_back(4*x*n+y+1);
            }
            t+=2;
            for(k=1;k<=t;k++){
                if(s==1) x++;
                else x--;
                if(x<0 || x>=4*n) return temp;
                temp.push_back(4*x*n+y+1);
            }
            for(k=1;k<=t;k++){
                if(s==1) y--;
                else y++;
                if(y<0 || y>=4*n) return temp;
                temp.push_back(4*x*n+y+1);
            }
            t+=2;
        }
        return temp;
    }
    vector<vector<int>> formCoils(int n) {
        
        // code here
        vector<vector<int>> ans;
        ans.push_back(helper(2*n,2*n-1,n,1));
        ans.push_back(helper(2*n-1,2*n,n,-1));
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends