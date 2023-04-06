//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int i = 0;
        bool found = false;
        while(i<n){
            if(!found && arr[i]>0){
                found = true;
                if(arr[i]!=1)  return 1;
            }
            i++;
            if(found){
                if(arr[i]!=arr[i-1] && arr[i]!=arr[i-1]+1){
                    return arr[i-1]+1;
                }
            }
        }
        if(found) return arr[n-1]+1;
        return 1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends