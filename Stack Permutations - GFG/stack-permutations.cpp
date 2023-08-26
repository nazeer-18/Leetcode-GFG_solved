//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int isStackPermutation(int n,vector<int> &a,vector<int> &b){
        stack<int> st;
        int i =0,j=0;
        while(i<n && j<n){
            if(!st.empty() && st.top()==b[j]){
                j++;
                st.pop();
            }
            else{
                while(i<n && b[j]!=a[i]){
                    st.push(a[i]);
                    i++;
                }
                if(i<n &&  a[i]==b[j]){
                    j++;
                    i++;
                }
            }
        }
        while(!st.empty() &&  j<n){
            if(st.top()==b[j]){
                st.pop();
                j++;
            }else return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        Solution ob;
        cout<<ob.isStackPermutation(n,a,b)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends