//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int n){
        if(n==1 || n==7) return true;
        else if(n<10) return false;
        int sqsum=0;
        while(n){
            sqsum+= pow(n%10,2);
            n/=10;
        }
        return isHappy(sqsum);
    }
    int nextHappy(int n){
        // code here
        if(isHappy(++n)) return n;
        return nextHappy(n);
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
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends