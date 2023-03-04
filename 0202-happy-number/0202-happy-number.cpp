class Solution {
public:
    int getSqrSum(int n) {
        int sum = 0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        } 
        return sum;
    }
    bool isHappy(int n) {
        while(true) {
            if(n==89) return false;
            if(n==1) return true;
            n = getSqrSum(n);
        }
        return false;
    }
};