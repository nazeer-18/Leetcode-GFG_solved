//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0,p=1;
        while(i<n && j<m){
            if(p==k){
                return min(arr1[i],arr2[j]); 
            }
            if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                j++;
            }
            p++;
            if(k==p){
                if(i==n){
                    return arr2[j];
                }
                if(j==m) return arr1[i];
            }
        }
        while(i<n){
            if(p==k){
                return arr1[i]; 
            }
            i++;
            p++;
        }
        while(j<m){
            if(p==k){
                return arr2[j]; 
            }
            j++;
            p++;
        }
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends