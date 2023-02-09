//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        // code here
        stack<char> st;
        for(int i=0; i< s.length(); i++){
            if(s[i]=='(' || s[i]=='+' || s[i] == '-' || s[i]=='*' || s[i]=='/'){
                if(st.empty() || s[i]=='(' || st.top()=='(') st.push(s[i]);
            }
            if(s[i]==')'){
                if(st.empty() || st.top()=='(')
                    return 1;
                st.pop();
                st.pop();
            }
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends