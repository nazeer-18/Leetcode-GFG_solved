class StockSpanner {
public:
    stack<pair<int,int>> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.empty()){
            s.push({price,1});
            return 1;
        }
        int maxi=1;
        while(!s.empty() && (s.top()).first<=price){
            maxi+=(s.top()).second;
            s.pop();
        }
        s.push({price,maxi});
        return maxi;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */