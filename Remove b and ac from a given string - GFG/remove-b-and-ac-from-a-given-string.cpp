//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string s) 
    { 
        //code here.
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='b') {
                s.erase(s.begin()+i);
                i--;
            }
            else {
                if(s[i]=='a' && i < s.length()-1 && s[i+1]=='c'){
                    s.erase(s.begin()+i);
                    s.erase(s.begin()+i);
                    i--;
                }
            }
        }
        return s;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends