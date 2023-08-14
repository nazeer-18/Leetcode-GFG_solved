//{ Driver Code Starts
//Initial template for C++
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int minLength(string str, int n) {
        // code here
        int f,s;
        for(int i=0;i<n-1;){
            f=str[i]-'0';s=str[i+1]-'0';
            if(!((f+s)==13 || f+s==1 || f+s==5 || ((f+s)==9 && (f==4||f==5)) || (f+s==17)) && (f==(s+1)%10 || s==(f+1)%10)){
                n-=2;
                str.erase(str.begin()+i);
                str.erase(str.begin()+i);
                if(i) i--;
            }else i++;
        }
        return n;
    } 
};


//{ Driver Code Starts.

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        Solution obj;
        cout << obj.minLength(s, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends