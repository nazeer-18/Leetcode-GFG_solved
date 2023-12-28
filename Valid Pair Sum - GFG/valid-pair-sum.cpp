//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	sort(a,a+n);
    	int j=n-1,k=0;
    	long long ans=0;
    	while(k<n-1){
    	    if(a[k]>0) ans+=n-k-1;
    	    else{
    	        while(j>k && a[k]+a[j]>0) j--;
    	        j++;
    	        if(j<n && a[j]+a[k]>0) ans+=n-j;
    	        j--;
    	    }
    	    k++;
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
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 


// } Driver Code Ends