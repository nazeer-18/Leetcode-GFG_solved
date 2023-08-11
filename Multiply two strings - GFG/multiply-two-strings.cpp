//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    void trail(string &s){
        int i = 0, n=s.length();
        while(i<n && (s[i]=='0' ||s[i]=='-')) i++;
        s=s.substr(i,n-i);
    }
    string multiplyStrings(string s1, string s2) {
       //Your code here
       int sign=1;
       if(s1[0]=='-') sign*=-1;
       if(s2[0]=='-') sign*=-1;
       trail(s1);trail(s2);
       int n1=s1.length(),n2=s2.length();
       if(n1<n2){
           swap(n1,n2);
           swap(s1,s2);
       }
       string ans;
       //n1 is larger string 
       int c=0,temp=0,ind=0,len=n1;
       for(int i=0;i<n1;i++) ans+='0';
       for(int i = 0;i <n2;i++){
           c=0,ind=i;
           for(int j=n1-1;j>=0;j--){
               temp=ans[len-ind-1]-'0';
               //cout<<temp<<" "<<ind<<endl;
               temp += (c+((s1[j]-'0')*(s2[n2-i-1]-'0')));
               //cout<<i<<" "<<j<<" "<<temp<<" p"<<ans<<" "<<c<<endl;
               c=temp/10;
               temp%=10;
                ans[len-ind-1]=temp+'0';
               //cout<<i<<" "<<j<<" "<<temp<<" p"<<ans<<" "<<c<<endl;
               ind++;
           }
           if(c) ans = to_string(c)+ans;
           else if(i!=n2-1) ans="0"+ans;
           len++;
       }
       if(sign==-1) {
           ans = "-"+ans;
       }
        return ans;   
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends