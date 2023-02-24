//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int i = 0, j = n-1;
        for(int k = 0; k < n && i<j; k++){
            if(a[k]==0 && i<k){
                swap(a[i],a[k]);
                i++;k--;
            }else if(a[k]==2 && j>k){
                swap(a[j],a[k]);
                j--;k--;
            }
            //for(int i =0; i < n; i++) cout<<a[i]<<" ";
            //cout<<endl;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends