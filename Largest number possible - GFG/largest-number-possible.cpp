//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        // code here
        string k;
        if(9*n<s || (s==0 && n>1)) return "-1";
        int i =1;
        while(s>9 && i<=n){
            k+='9';
            s-=9;
            i++;
        }
        if(s!=0){
            k+=(s+'0');
            i++;
        }
        while(i<=n){ k+='0';i++;}
        return k;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends