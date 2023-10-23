//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxSumLis(int a[], int n) {
        // code here
        int i, maxi=1,ans=0,sum=a[0],tempSum,cnt;
        for(i=0;i<n;i++) ans+=a[i];
	    vector<pair<int,int>> v(n,{0,1});
	    for(int i=n-1;i>=0;i--){
	        cnt=0;tempSum=0;
	        for(int j=i+1;j<n;j++){
	            if(a[i]<a[j] && v[j].second>=cnt){
	                if(v[j].second>cnt){
	                    cnt=v[j].second;
	                    tempSum = v[j].first;
	                }else{
	                    tempSum = min(tempSum,v[j].first);
	                }
	            } 
	        }
	        v[i].first = tempSum+a[i];
	        v[i].second += cnt;
	        if(cnt+1==maxi){
	            sum = min(sum,v[i].first);
	        }else if(cnt+1>maxi){
	            sum = v[i].first;
	            maxi = cnt+1;
	        }
	    }
	    return ans-sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int Arr[n];
        for (int i = 0; i < n; i++) cin >> Arr[i];
        Solution obj;
        cout << obj.maxSumLis(Arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends