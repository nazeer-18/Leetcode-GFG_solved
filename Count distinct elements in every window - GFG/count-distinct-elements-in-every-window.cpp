//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int a[], int n, int k)
    {
        //code here.
        int i = 0,cnt=0;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(i = 0; i < k; i++) {
            if(mp[a[i]]==0) cnt++;
            mp[a[i]]++;
        }
        ans.push_back(cnt);
        for(;i<n;i++) {
            if(mp[a[i-k]]==1) cnt--;
            mp[a[i-k]]--;
            if(mp[a[i]]==0) cnt++;
            mp[a[i]]++;
            ans.push_back(cnt);
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

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends