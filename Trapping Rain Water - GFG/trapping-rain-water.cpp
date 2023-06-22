//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int a[], int n){
        // code here
        stack<pair<int,int>> st;
        //store in decreaing heights
        int i = 0;
        long long ans=0;
        for(; i < n ;i++){
            while(!st.empty() && st.top().second<= a[i]){
                int h = st.top().second;
                st.pop();
                if(!st.empty()){
                    ans+= (i-st.top().first-1)*min(st.top().second-h,a[i]-h);
                }
            }
            st.push({i,a[i]});
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends