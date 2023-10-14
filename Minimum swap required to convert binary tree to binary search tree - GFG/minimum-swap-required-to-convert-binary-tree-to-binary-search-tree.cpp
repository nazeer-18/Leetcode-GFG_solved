//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
  public:
  int cnt,siz;
  unordered_map<int,int> mp;
  void help(vector<int>& a,int i){
      if(i>=siz) return;
      if(2*i+1<siz){
        help(a,2*i+1);
        mp[a[i]]=cnt;
        cnt++;
        help(a,2*i+2);
      }else{
        mp[a[i]]=cnt;
        cnt++;
      }
  }
    int minSwaps(vector<int>&a, int n){
        //Write your code here
        cnt=0;siz=n;mp.clear();
        help(a,0);
        sort(a.begin(),a.end());
        unordered_map<int,int> ip;
        for(auto it:mp) {
            //cout<<it.first<<" "<<it.second<<endl; 
            ip[it.second]=it.first;
        }
        // for(auto it:ip) {
        //     cout<<it.first<<" "<<it.second<<endl; 
        // }
        int i=0;cnt=0;
        for(;i<n;i++){
            if(mp[a[i]]!=i){
                mp[ip[i]] = mp[a[i]];
                ip[mp[a[i]]] = ip[i];
                cnt++;
            }
        }
        return cnt;
    }
    
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>A(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> A[i];
	    }
	    Solution ob;
	    int ans = ob.minSwaps(A, n);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends