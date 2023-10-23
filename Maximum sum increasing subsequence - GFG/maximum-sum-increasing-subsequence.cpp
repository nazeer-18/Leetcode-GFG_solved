//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int a[], int n)  
	{  
	    // Your code goes here
	    int i, maxi,ans=0;
	    vector<int> v(n,0);
	    for(int i=n-1;i>=0;i--){
	        maxi=0;
	        for(int j=i+1;j<n;j++){
	            if(a[i]<a[j]){
	                maxi=max(maxi,v[j]);
	            } 
	        }
	        v[i] = maxi+a[i];
	        ans=max(ans,v[i]);
	    }
	    return ans;
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends