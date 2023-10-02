//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here 
	    int m = 1e9+7,n=s.length();
	    vector<int> dp(n+1,1);
	    map<char,int> mp;
	    for(int i=1;i<=n;i++){
	        dp[i] = (dp[i-1]*2)%m;
	        auto it = mp.find(s[i-1]);
	        if(it!=mp.end()){
	            dp[i]= (dp[i]-dp[it->second-1]+m)%m;
	        }
	        mp[s[i-1]]=i;
	    }
	    return dp[n]%m;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends