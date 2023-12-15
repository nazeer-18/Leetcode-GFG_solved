//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        long long i=0,s=0,maxi=0;
         map<int,int>mp;
         mp[0]=-1;
         while(i<n){
            s+=a[i];
            if(mp.find(s)==mp.end()) mp[s]=i;
            if(mp.find(s-k)!=mp.end()){
                maxi=max(maxi,i-mp[s-k]);
            }
            i++;
         }
         return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends