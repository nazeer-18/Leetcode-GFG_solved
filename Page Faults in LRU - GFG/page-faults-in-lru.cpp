//{ Driver Code Starts
// Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int pageFaults(int N, int C, int pages[]){
        // code here
        vector<int> v;
        for(int i =0;i<N;i++) v.push_back(pages[i]);
        int ans = 0;
        for(int i = 1; i < v.size(); i++) {
            for(int j = 0; j < i; j++){
                if(v[j]==v[i]){
                    ans++;
                    //cout<<v[i]<<" "<<v[j]<<endl;
                    v.erase(v.begin()+j);
                    i--;
                    break;
                }
                if(j==C-1){
                    v.erase(v.begin());
                    i--;
                    break;
                }
            }
            // for(int i = 0; i < v.size(); i++) cout<<v[i]<<" "; cout<<endl;
            // cout<<i<<" "<<ans<<endl;
        }
        return N-ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, C;
        cin>>N;
        int pages[N];
        for(int i = 0;i < N;i++)
            cin>>pages[i];
        cin>>C;
        
        Solution ob;
        cout<<ob.pageFaults(N, C, pages)<<"\n";
    }
    return 0;
}
// } Driver Code Ends