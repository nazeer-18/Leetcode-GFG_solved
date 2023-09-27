//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
	public:
    long long a[13];
    //0 1 19 271 3439 40951 468559 5217031 56953279 612579511 6513215599 68618940391 717570463519
    
    long long solve(long long n,long long p9){
        //find number of 9's there under n and add that
        long long c9=0,i=0;
        long long temp = n,k=0,p=1,t=0;
        while(temp){
            if(temp%10==9){
                c9=k+1;
            }
            k=k+(temp%10)*p;
            c9+=((temp%10)*a[i]);
            i++;
            temp/=10;
            p*=10;
        }
        if(c9==p9){
            return n;
        } 
        return solve(n+c9-p9,c9);
    }
    long long findNth(long long n)
    {
        a[0] = 0;
        long long k=1;
        for(int i=1;i<13;i++){
            a[i]=k+9*a[i-1];
            k*=10;
        }
        return solve(n,0);
        //10000021409
        //10000006486
        //10000024730
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}


// } Driver Code Ends