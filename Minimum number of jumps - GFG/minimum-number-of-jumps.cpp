//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int cnt=0,i;
        for(i= 0; i< n-1;){
            int maxi=0,j=i+1,idx=i+1;
            while(i+arr[i]<n && j <= i+arr[i]){
                maxi = max(maxi,j+arr[j]);
                if(maxi==j+arr[j]) idx=j;
                j++;
            }
            cnt++;
            if(i+arr[i]>=n-1) return cnt;
            if(maxi==0) return -1;
            i=idx;
            //cout<<i<<" "<<idx<<" "<<cnt<<endl;
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
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends