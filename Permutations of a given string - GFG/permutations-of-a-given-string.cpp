//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    vector<string> ans;
	    int n;
	    void solve(string s,int i){
	        if(i==n){
	            if(find(ans.begin(),ans.end(),s)==ans.end())
	            ans.push_back(s);
	            return;
	        }
	        for(int j=i;j<n;j++){
	            swap(s[i],s[j]);
	            solve(s,i+1);
	            swap(s[i],s[j]);
	        }
	    }
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    n=s.length();
		    ans.clear();
		    solve(s,0);
		    
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends