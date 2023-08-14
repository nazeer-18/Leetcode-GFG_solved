//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int k=0,i=0,n=nums.size(),fs=0,tmp=0,sb=1;
        vector<int>ans;
        for(;i<n;i++){
            k^=nums[i];
        }
        fs=log2(k);
        int fo=0;
        for(i=0;i<n;i++){
            sb=1<<fs;
            if(sb&nums[i]) fo^=nums[i];
        }
        ans.push_back(fo^k);
        ans.push_back(fo);
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends