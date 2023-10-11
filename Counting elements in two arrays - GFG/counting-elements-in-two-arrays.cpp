//{ Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
  int binary(int b[],int x,int n){
      int l=0,r=n-1,m;
      while(l<=r){
          m=l+(r-l)/2;
          if(b[m]>x) r=m-1;
          else l=m+1;
      }
      return l;
  }
    vector<int> countEleLessThanOrEqual(int a[], int b[], 
                                 int m, int n)
    {
    //Your code goes here
        vector<int>v(m,0);
        int i=0,j=0;
        sort(b,b+n);
        for(i=0;i<m;i++){
            v[i] = binary(b,a[i],n);
        }
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
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends