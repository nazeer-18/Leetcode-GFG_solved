//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    bool isPrime(int N){
        if(N<2) return false;
        for(int i =2; i<=sqrt(N);i++){
            if(N%i==0) return false;
        }
        return true;
    }
    long long int largestPrimeFactor(int N){
        // code here
        long long ans = 2;
        for(int i = 1;i<=sqrt(N);i++){
            if(N%i==0){
                if(isPrime(N/i)) return N/i;
                else if(isPrime(i)) ans=i;
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends