//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int a[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int m,n=h+1;
        while(l<=h){
            m=l+(h-l)/2;
            if(m==0 || a[m]<a[m-1]){
                break;
            }else if(a[m]>a[0]){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        if(m==0 && m!=n-1) m++;
        if(key<=a[n-1]){
            //right
            l=m;
            h=n-1;
        }else{
            h=m;
            l=0;
        }
        while(l<=h){
            m=l+(h-l)/2;
            //cout<<l<<" "<<h<<" "<<m<<" "<<a[m]<<endl;
            if(a[m]==key) return m;
            else if(a[m]<key){
                l=m+1;
            }else{
                h=m-1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends