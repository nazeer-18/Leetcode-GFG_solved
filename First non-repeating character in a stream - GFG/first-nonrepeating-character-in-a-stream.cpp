//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> a(26,-1);
		    string ans;
		    int n =  A.length();
		    for(int i = 0; i <n; i++) {
		        if(a[A[i]-'a']==-1) a[A[i]-'a'] = i;
		        else a[A[i]-'a'] = -2;
		        int j = n;
		        for(int i = 0; i < 26; i++) {
		            if(a[i]!=-1 && a[i]!=-2) {
		                j = min(j,a[i]);
		            }
		        }
		        if(j==n) ans+='#';
		        else ans+= A[j];
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends