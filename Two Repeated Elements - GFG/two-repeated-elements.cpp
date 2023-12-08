//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int a[], int n) {
        // Your code here
        vector<int> v;
        int f=0,s=0,i=0,eor=0;
        while(i<n+2){
            eor^=a[i];
            if(i+1<=n) eor^=(i+1);
            i++;
        }
        int sb = 1<<(int)log2(eor);
        i=0;
        //cout<<sb<<endl;
        while(i<n+2){
            if(i<n && sb&(i+1)) f^=(i+1);
            if(sb&a[i]) f^=a[i];
            i++;
        }
        // cout<<f<<endl;
        // return vector<int> {f,s};
        if(f==0) f=sb;
        s=eor^f;i=0;
        int fcnt=0,scnt=0;
        while(i<n+2){
            if(a[i]==f) fcnt++;
            else if(a[i]==s) scnt++;
            if(fcnt==2){
                v.push_back(f);
                v.push_back(s);
                return v;
            }
            if(scnt==2){
                v.push_back(s);
                v.push_back(f);
                return v;
            }
            i++;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends