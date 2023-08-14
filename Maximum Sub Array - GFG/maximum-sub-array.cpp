//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    vector<int> ans;
	    int sum=0,maxi=a[0],f=-1,len=0,l=-1;
	    for(int i=0;i<n;i++){
	        if(a[i]<0){
	            if(maxi<sum){
	                f=i-len;
	                l=i-1;
	                maxi=sum;
	            }else if(maxi==sum){
	                if(l-f+1<len){
	                    f=i-len;
	                    l=i-1;
	                }
	            }
	            sum=0;
	            len=0;
	        }else{
	            len++;
	            sum+=a[i];
	        }
	    }
	    //cout<<maxi<<sum<<len<<endl;
	    if(maxi<sum){
	        f=n-len;
	        l=n-1;
	        maxi=sum;
	    }else if(maxi==sum){
	        if(l-f+1<len){
	            f=n-len;
	            l=n-1;
	       }
	   }
	   if(f==-1) {
	       ans.push_back(-1);
	       return ans;
	   }else{
	       for(int i=f;i<=l;i++) ans.push_back(a[i]);
	   }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends