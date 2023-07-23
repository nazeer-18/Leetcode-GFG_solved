//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(int n,int i , string s){
        if(i==n){
            cout<<s<<" ";
            return;
        }
        solve(n,i+1,s+'0');
        if(s[i-1]=='0')  solve(n,i+1,s+'1');
    }
    void generateBinaryStrings(int num){
        //Write your code
        solve(num,1,"0");
        solve(num,1,"1");
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends