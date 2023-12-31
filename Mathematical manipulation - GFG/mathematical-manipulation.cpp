//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
	int CommonFactor(int n){
	    // Code here
	    if(n==1) return 0;
	    vector<int>v(n+1,0);
	    int i=2,ans=1,j;
	    while(i<n){
	        if(v[i]==0 && n%i==0){
	            j=i;
	            while(j<n){
	                if(v[j]!=1) ans++;
	                v[j]=1;
	                j+=i;
	            }
	        }
	        i++;
	    }
	    return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.CommonFactor(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends