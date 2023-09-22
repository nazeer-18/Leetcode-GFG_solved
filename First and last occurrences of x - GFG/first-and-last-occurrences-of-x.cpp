//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int a[], int n , int x )
    {
        // code here
        vector<int> v{-1,-1};
        int low = 0,mid,high = n-1;
        while(low<=high){
            mid = low+ (high-low)/2;
            if(a[mid]>x){
                high = mid-1;
            }else if(a[mid]==x){
                v[0] = v[1] = mid;
                break;
            }else{
                low =mid+1;
            }
        }
        int temp = mid;
        while(mid>0 && a[mid-1]==x) mid--;
        if(a[mid]==x) v[0] = mid;
        while(temp<n-1 && a[temp+1]==x ) temp++;
        if(a[temp]==x) v[1]=temp;
        if(v[0]==-1 && v[1]!=-1) v[0]=v[1];
        if(v[0]!=-1 && v[1]==-1) v[1]=v[0];
        return v;
    }
};

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
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends