//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int a[], int n , int t )
{
    // code here
    int i =0, x = n,y=-1;
    for(;i<(n+1)/2;i++){
        if(a[i]==t) {
            x=min(x,i);
            y=max(y,i);
        }if(a[n-i-1]==t){
            x=min(x,n-i-1);y=max(y,n-i-1);
        }  
    }
    if(x==n) x=-1;
    return vector<int>{x,y};
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends