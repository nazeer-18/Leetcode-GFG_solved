class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        int i = 0,n=a.size();
        for(int i=0;i<n;i+=3){
            ans.push_back({a[i],a[i+1],a[i+2]});
            if(a[i+2]-a[i]>k) return vector<vector<int>>(0);
        }
        return ans;
    }
};