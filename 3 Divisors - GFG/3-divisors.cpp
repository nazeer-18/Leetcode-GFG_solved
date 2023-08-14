//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        vector<int>ans;
        long long maxi=0,cnt=0;
        for(int i=0;i<q;i++) maxi=max(maxi,query[i]);
        vector<pair<int,int>>primes(maxi+1,{1,0});
        primes[0]={0,0};primes[1]={0,0};
        for(int i=2;i<=sqrt(maxi);i++){
            if(primes[i].first){
                cnt++;
                for(int j = i*i;j<=maxi;j+=i) primes[j].first=0;
            }
            primes[i].second=cnt;
        }
        for(int i : query){
            i = sqrt(i);
            ans.push_back(primes[i].second);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends