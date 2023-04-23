class Solution {
public:
    double myPow(double x, long long n) {
        if(n<0) {
            n*=-1;
            x = 1/(double)x;
            //cout<<n<< " "  <<x<<endl;
        }
        if(n==0)  return 1;
        if(n%2==0) {
            double half = myPow(x,n/2);
            //cout<<half<<" if "<<x<<" "<<n<<endl;
            return half*half;
        }
        else {
            double half = myPow(x,n/2);
            //cout<<half<<" if "<<x<<" "<<n<<endl;
            return x*half*half;
        }
    }
};