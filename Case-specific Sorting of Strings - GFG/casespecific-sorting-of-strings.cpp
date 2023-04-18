//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        int l[26] = {0};
        int h[26] ={0};
        for(int i =0; i <str.length(); i++) {
            if(str[i]>='a') l[str[i]-'a']++;
            else h[str[i]-'A']++;
        }
        int x = 0, y = 0;
        for(int i = 0; i < str.length(); i++) {
            if(str[i]>='a') {
                while(l[x]==0) x++;
                str[i]=x+'a';
                l[x]--;
            } else{
                while(h[y]==0) y++;
                str[i]=y+'A';
                h[y]--;
            }
        }
        return str;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends