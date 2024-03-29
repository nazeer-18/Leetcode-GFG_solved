//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        int curr=0;
        vector<int> ans;
        vector<bool> visited(v,false);
        stack<int> st;
        st.push(0);
        while(!st.empty()){
            curr=st.top();
            st.pop();
            if(!visited[curr]){
                ans.push_back(curr);
                visited[curr]=true;
            }
            for(int i = adj[curr].size()-1; i>=0; i--){
                if(!visited[adj[curr][i]]){
                    st.push(adj[curr][i]);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends