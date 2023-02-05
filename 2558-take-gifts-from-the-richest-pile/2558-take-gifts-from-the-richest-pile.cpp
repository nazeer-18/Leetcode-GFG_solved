class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum = 0;
        priority_queue<int> pq;
        for(auto i : gifts) pq.push(i);
        while(k--){
            pq.push(sqrt(pq.top()));
            pq.pop();
        }
        while(pq.size()>0) {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};