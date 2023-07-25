//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        int i = 0,n=s.length();
        if(k==1) return "";
        stack<pair<char,int>> st;
        for(;i<n;i++){
            if(st.empty()){
                st.push({s[i],1});
            }else{
                if(s[i]==st.top().first){
                    st.top().second++;
                    if(st.top().second==k){
                        st.pop();
                    }
                }
                else{
                    st.push({s[i],1});
                }
            }
        }
        s="";
        while(!st.empty()){
            for(i=0;i<st.top().second;i++)
            s+=st.top().first;
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends