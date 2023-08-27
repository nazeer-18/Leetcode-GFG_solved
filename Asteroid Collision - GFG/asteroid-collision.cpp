//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &a) {
        // code here
        int i=1;
        while(i<n){
            if(a[i]<0 && a[i-1]>0){
                if(a[i-1]>-1*a[i])
                    a.erase(a.begin()+i);
                else if(a[i-1]==-1*a[i]){
                    i--;
                    a.erase(a.begin()+i);
                    a.erase(a.begin()+i);
                    n--;
                }
                else{
                    i--;
                    a.erase(a.begin()+i);
                }
                n--;
            }else{
                i++;   
            }
            if(i==0) i++;
        }
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends