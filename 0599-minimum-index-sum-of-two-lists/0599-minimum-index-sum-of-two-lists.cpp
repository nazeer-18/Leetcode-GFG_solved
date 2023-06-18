class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        map<string,int> mp;
        int mini=INT_MAX,i = 0,n=list1.size(),m=list2.size();
        for(;i<n;i++) mp[list1[i]]=i;
        for(i=0;i<m;i++) {
            if(mp.count(list2[i])!=0) {
                if(mp[list2[i]]+i<mini) {
                    mini = mp[list2[i]] + i;
                    ans.clear();
                    ans.push_back(list2[i]);
                }else if(mini==mp[list2[i]]+i) ans.push_back(list2[i]);
            }
        }
        return ans;
    }
};