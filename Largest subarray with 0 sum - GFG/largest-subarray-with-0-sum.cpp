//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        // Your code here
         long long i=0,s=0,maxi=0;
         map<int,int>mp;
         while(i<n){
             s+=a[i];
            if(s==0){
                mp[0]=0;
            }
             if(mp.find(s)!=mp.end()){
                 if(s==0){
                     maxi=max(maxi,i-mp[s]+1);
                 }else
                 maxi=max(maxi,i-mp[s]);
             }else mp[s]=i;
             i++;
         }
         return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends