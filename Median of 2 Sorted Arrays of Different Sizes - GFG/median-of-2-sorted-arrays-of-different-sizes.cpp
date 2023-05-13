//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& a, vector<int>& b)
    {
        // Your code goes here
        double ans = 0;
        int m1 = a.size()+b.size();
        int m2 = m1/2;
        m1 = (m1-1)/2;
        int i = 0, j = 0,k =0 ;
        while(i<a.size() && j < b.size()) {
            if(k==m1) {
                ans += min(a[i],b[j]);
            }
            if(k== m2){
                ans+= min(a[i],b[j]);
            }
            if(a[i]<b[j]) i++;
            else j++;
            k++;
            if(k>m2) return ans/2.0;
        }
        if(i<a.size()) {
            if(k<=m1) ans+= a[m1-k+i];
            ans += a[m2-k+i];
        }
        if(j<b.size()) {
            if(k<=m1) ans+= b[m1-k+j];
            ans += b[m2-k+j];
        }
        //cout<<ans<<endl;
        return ans/2.0;
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
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends