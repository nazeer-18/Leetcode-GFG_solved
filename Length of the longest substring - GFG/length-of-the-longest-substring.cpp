//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int a[26]={0},i=0,n=s.length(),cnt=0,maxi=1,b[26];
        for(;i<26;i++) b[i]=-1;
        for(i=0;i<n;i++){
            if(a[s[i]-'a']>=1 && b[s[i]-'a']>=cnt){
                //2nd ocurrence
                maxi = max(maxi,i-cnt);
                cnt=b[s[i]-'a']+1;
            }
            a[s[i]-'a']=1;
            b[s[i]-'a']=i;
            //cout<<i<<" "<<cnt<<" "<<maxi<<endl;
        }
        return max(maxi,i-cnt);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends