//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
   bool isFeasible(int a[],int n,int m,long long mid){
        long long ns=1,sum=0,i=0;
        while(i<n){
            if(a[i]>mid){
                return false;
            }else{
                if(sum+a[i]>mid){
                    ns++;
                    sum=a[i];
                    if(ns>m) return false;
                }else{
                    sum+=a[i];
                }
            }
            i++;
        }
        return true;
    }
    long long minTime(int a[], int n, int m)
    {
        // code here
        // return minimum time
         //if(m>n) return -1;
        long long start = 0,end=0,i=0,mid=0,ans;
        while(i<n){
            end+=a[i];
            i++;
        }
        ans=end;
        while(start<=end){
            mid = start+(end-start)/2;
            //cout<<start<<" "<<end<<" "<<mid<<" "<<ans<<endl;
            if(isFeasible(a,n,m,mid)){
                ans=min(ans,mid);
                end=mid-1;
                //cout<<"yes "<<ans<<endl; 
            }else{
                //cout<<"no "<<ans<<endl; 
                start=mid+1;
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