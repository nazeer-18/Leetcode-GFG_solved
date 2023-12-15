//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    int m=1e9+7;
		int nthPoint(int n){
		    // Code here
		    if(n<4) return n;
		    int i=4,l=2,h=3,s;
		    while(i<=n){
		        s=(h+l)%m;
		        l=h%m;
		        h=s%m;
		        i++;
		    }
		    return h;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends