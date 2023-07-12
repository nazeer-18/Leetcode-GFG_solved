//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        vector<int> v;
        sort(arr,arr+n);
        int i = 0,freq=1;
        for(;i<n-1;i++){
            if(arr[i]==arr[i+1]) freq++;
            else{
                v.push_back(freq);
                freq=1;
            } 
        }
        if(arr[n-1]==arr[n-2]) v.push_back(freq);
        sort(v.begin(),v.end());
        n=v.size();
        for(i=0;i<n-1;i++){
            if(v[i]==v[i+1]) return false;
        }
        return true;
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
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends