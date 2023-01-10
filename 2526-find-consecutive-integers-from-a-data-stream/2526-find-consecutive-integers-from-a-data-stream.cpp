class DataStream {
public:
    vector<long> v;
    int i = 0,cnt=0;
    long value,k;
    bool ans=false;
    DataStream(int value, int k) {
        this->value = value;
        this->k=k;
        ans=false;
        i=0;
    }
    
    bool consec(int num) {
        i++;
        v.push_back(num);
        if(num==value) cnt++;
        else cnt=0;
        if(i<k) ans= false;
        else {
            if(cnt>=k) ans=true;
            else ans=false;
            if(ans==true && num==value) ans=true;
            else ans=false;
        }
        return ans;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */