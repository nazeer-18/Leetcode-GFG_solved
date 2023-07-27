//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int i = 0, j = 0;
    string solve(int a[26],int b[26]){
        string ans;
        bool f=true,s=false;
        while(i<26 && j<26){
            if(f){
                while(i<26 && a[i]==0) i++;
                if(i!=26){
                    ans+=(i+'a');
                    a[i]--;
                } 
                f=false;
                s=true;
            }else{
                while(j<26 && b[j]==0) j++;
                if(j!=26) {
                    ans+=(j+'a');
                    b[j]--;
                }
                f=true;
                s=false;
            }
        }
        while(i<26){
            if(a[i]!=0){
                ans+=(i+'a');
                a[i]--;
            }else i++;
        }
        while(j<26){
            if(b[j]!=0){
                ans+=(j+'a');
                b[j]--;
            }else j++;
        }
        return ans;
    }
    string rearrange (string s, int n)
    {
        // your code here
        int vow[26],con[26],i=0,vcnt=0,ccnt=0,j=0;
        for(;i<26;i++){
            vow[i]=0;con[i]=0;
        }
        for(i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vcnt++;
                vow[s[i]-'a']++;
            }else{
                ccnt++;
                con[s[i]-'a']++;
            }
        }
        i=0;j=0;
        while(i<26 && vow[i]==0) i++;
        while(j<26 && con[j]==0) j++;
        if(abs(vcnt-ccnt)>1) return "-1";
        if(vcnt>ccnt) return solve(vow,con);
        else if(vcnt<ccnt) return solve(con,vow);
        else{
            if(i<j) return solve(vow,con);
            return solve(con,vow);
        }
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends