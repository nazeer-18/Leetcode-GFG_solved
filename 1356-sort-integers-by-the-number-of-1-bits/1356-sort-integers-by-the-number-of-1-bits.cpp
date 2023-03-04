class Solution {
public:
    static int nos1(int a) {
        int cnt = 0;
        while(a){
            a = a&(a-1);
            cnt++;
        }
        return cnt;
    }
    static bool compare(int a, int b){
        int x = nos1(a);
        int y = nos1(b);
        if(x==y) return a<=b;
        return x<y;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};