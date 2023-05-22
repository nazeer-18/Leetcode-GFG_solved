class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        vector<int> temp(2,0);
        priority_queue <pair<int,pair<int,int>>> pq;
        for(auto i: points) pq.push({i[0]*i[0]+i[1]*i[1],{i[0],i[1]}});
        int i = points.size()-k;
        while(i--){
            pq.pop();
        }
        while(!pq.empty()){
            k--;
            temp[0] = pq.top().second.first;
            temp[1] = pq.top().second.second;
            ans.push_back(temp);
            pq.pop();
        }
        return ans;
    }
};