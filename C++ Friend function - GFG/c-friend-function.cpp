//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
    private:
    string first_name;
    string last_name;
    
    public:
    void set_name(string f, string l)
    {
        first_name = f;
        last_name = l;
    }
       
    friend void check_name(student k);
};

    
// } Driver Code Ends
//User function Template for C++

void check_name(student k)
{
    //Add your code here.
    int a[26]={0},b[26]={0},n=k.first_name.length(),m=k.last_name.length();
    if(m!=n){
        cout<<"NOT ANAGRAM\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(k.first_name[i]>='a')
            a[k.first_name[i]-'a']++;
        else
            b[k.first_name[i]-'A']++;
    }
    for(int i=0;i<m;i++){
        if(k.last_name[i]>='a')
        a[k.last_name[i]-'a']--;
        else b[k.last_name[i]-'A']--;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0 || b[i]!=0){
            cout<<"NOT ANAGRAM\n";
            return;
        }
    }
    cout<<"ANAGRAM\n";
}

//{ Driver Code Starts.
  
  
  
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   
	    string f,l;
	    cin>>f>>l;
	   
	    student s1;
	    s1.set_name(f,l);
	    check_name(s1);
	    
	    
	    
	}
	return 0;
}
// } Driver Code Ends