//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    bool isPrime(int n) {
	        for(int i = 2; i<= sqrt(n); i++){
	            if(n%i==0) return false;
	        }
	        return true;
	    }
		int Count(int L, int R){
		    // Code here
		    int countPrimes = 0;
		    for(int i = L ; i <= R; i++) {
		        if(i==1) continue;
		        if(!isPrime(i)) countPrimes++;
		        else countPrimes--;
		    }
		    return countPrimes;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends