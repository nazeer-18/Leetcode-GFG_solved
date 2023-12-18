class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int t) {
        vector<int> left,right,ans;
        int cnt=1,s=0,en=1,n=security.size();
        left.push_back(1);
        while(en<n){
            if(security[en]<=security[en-1]) cnt++;
            else{
                cnt=1;
            }
            left.push_back(cnt);
            en++;
        }
        s=0;
        en=n-2;
        right.push_back(1);
        cnt=1;
        while(en>=0){
            if(security[en]<=security[en+1]) cnt++;
            else{
                cnt=1;
            }
            right.push_back(cnt);
            en--;
        }
        t++;
        s=0;
        while(s<n){
            if(left[s]>=t && right[n-s-1]>=t) ans.push_back(s);
            s++;
        }
        return ans;
    }
};