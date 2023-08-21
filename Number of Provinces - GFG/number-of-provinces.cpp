//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int n) {
        // code here
       vector<int> v(n,0);
       stack<int> st;
       int cnt=0;
       for(int i=0;i<n;i++){
           for(int j = 0;j< n;j++){
               if(adj[i][j]==1 && v[j]==0){
                   st.push(j);
               }
           }
           if(!st.empty()) cnt++;
           while(!st.empty()){
               int t= st.top();
               st.pop();
               if(v[t]==0){
                   v[t]=1;
                   for(int j = 0; j <n;j++){
                       if(adj[t][j]==1 && v[j]==0){
                           st.push(j);
                       }
                   }
               }
           }
       }
       return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends