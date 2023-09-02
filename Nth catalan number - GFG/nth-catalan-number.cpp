//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
        long long int m = 1000000007;
        int cat[n+1]={0};
        cat[0]=1;cat[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                cat[i]=(cat[i] + (cat[j]*1ll*cat[i-j-1]))%m;
            }
        }
        return cat[n];
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends