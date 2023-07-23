//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int a[]){
        //Write your code here
        vector<pair<int,int>> vp;
        int i = 0,ans=0;
        for(i=0;i<n;i++){
            vp.push_back({a[i],i+1});
        }
        sort(vp.begin(),vp.end());
        i=0;
        while(i<n && k){
            if(vp[i].first*vp[i].second<=k) {
                k-=vp[i].first*vp[i].second;
                ans+= vp[i].second;
            }else{
                ans+= k/vp[i].first;
                k=0;
            }
            i++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends