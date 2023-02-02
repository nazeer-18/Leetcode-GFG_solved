//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        long long i = 0,k=0,sum=arr[0];
        vector<int> ans;
        if(s==0) {
            ans.push_back(-1);
            return ans;
        }
        while(k < n) {
            if(sum<s) {
                k++;
                sum+=arr[k];
            }
            else if (sum>s) {
                sum= sum - arr[i];
                i++;
            }
            if(sum==s) {
                ans.push_back(i+1);
                ans.push_back(k+1);
                return ans;
            }
        }
        ans.push_back(-1);
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
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends