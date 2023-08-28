//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
vector<int> ans;
    void solve(vector<int> a, int l,int h){
        if(l>h) return;
        int m = l+(h-l)/2;
        ans.push_back(a[m]);
        solve(a,l,m-1);
        solve(a,m+1,h);
        
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        ans.clear();
        solve(nums,0,nums.size()-1);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends