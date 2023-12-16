class Solution {
public:
    bool isGood(int a,int b,int c,int m,int t){
        long long ans = 1;
        int i=0;
        while(i<b){
            ans = ans*a;
            if(ans>=10){
                ans%=10;
            }
            i++;
        }
        i=0;
        b=ans;
        ans=1;
        while(i<c){
            ans = ans*b;
            if(ans>=m){
                ans%=m;
            }
            i++;
        }
        cout<<ans<<" "<<t<<endl;
        return ans==t;
    }
    vector<int> getGoodIndices(vector<vector<int>>& v, int t) {
        vector<int> ans;
        int i=0,n=v.size();
        while(i<n){
            if(isGood(v[i][0],v[i][1],v[i][2],v[i][3],t)){
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};