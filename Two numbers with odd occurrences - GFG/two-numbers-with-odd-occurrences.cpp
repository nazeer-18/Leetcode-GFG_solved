//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int nums[], long long int n)  
    {
        // code here
        long long int k=0,i=0,fs=0,tmp=0,sb=1;
        vector<long long int>ans;
        for(;i<n;i++)
            k^=nums[i];
        fs=log2(k);
        int fo=0;sb=1<<fs;
        for(i=0;i<n;i++)
            if(sb&nums[i]) fo^=nums[i];
        ans.push_back(fo);
        ans.push_back(fo^k);
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
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends