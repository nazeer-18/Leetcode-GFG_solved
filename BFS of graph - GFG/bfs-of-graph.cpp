//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        int curr=0;
        queue<int> q;
        vector<int> ans;
        vector<bool>visited(v,false);
        q.push(0);
        while(!q.empty()){
            curr = q.front();
            q.pop(); 
            if(!visited[curr]){
                ans.push_back(curr);
            }
            visited[curr]=true;
            for(auto i : adj[curr]){
                if(!visited[i]){
                    ans.push_back(i);
                    q.push(i);
                }
                visited[i]=true;
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
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends