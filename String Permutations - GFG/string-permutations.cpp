//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string> ans;
    int n;
    void solve(string s,int j){
        if(j==n) {
            ans.push_back(s);
            return;
        }
        for(int i=j;i<n;i++){
            swap(s[i],s[j]);
            solve(s,j+1);
            swap(s[i],s[j]);
        }
    }
    vector<string> permutation(string s)
    {
        //Your code here
        n =s.length();
        sort(s.begin(),s.end());
        ans.clear();
        solve(s,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends