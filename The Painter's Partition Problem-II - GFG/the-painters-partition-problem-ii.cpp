//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool isFeasible(int a[],int n,int k,long long mid){
       long long np = 1,sum=0,i=0;
       while(i<n){
           if(a[i]>mid) return false;
           else{
               if(a[i]+sum>mid){
                   sum=a[i];
                   np++;
                   if(np>k) return false;
               }else{
                   sum+=a[i];
               }
           }
           i++;
       }
       return true;
  }
    long long minTime(int a[], int n, int k)
    {
        // code here
        // return minimum time
        long long low = 0, high=0,mid,i=0;
        while(i<n){
            low = max(low,(long long)a[i]);
            high +=a[i];
            i++;
        }
        long long ans=high;
        while(low<=high){
            mid = low+(high-low)/2;
            if(isFeasible(a,n,k,mid)){
                high = mid-1;
                ans=min(ans,mid);
            }else{
                low = mid +1;
            }
        }
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
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends