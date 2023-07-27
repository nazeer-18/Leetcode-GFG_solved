//{ Driver Code Starts
//Initial template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string ans;
    string ExcelColumn(int n)
    {
        // Your code goes here
        int t = 0,q=0;
        if(n<=26){
            string tmp = "";
            tmp+=(char)(n-1+'A');
            return tmp;
        }
        else{
            t=n%26;
            q=n/26;
            if(t==0) {
                q--;t=26;
            }
            ans=ExcelColumn(q);
            ans+=(char)((t+25)%26+'A');
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
        Solution ob;
        cout<<ob.ExcelColumn(n)<<endl;
    }
    return 0;
}
    
// } Driver Code Ends