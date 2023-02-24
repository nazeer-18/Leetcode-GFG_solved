class Solution {
public:
    int subtractProductAndSum(int n) {
        int a[10] = {0},sum=0;
        while(n){
            a[n%10]++;
            sum+=n%10;
            n/=10;
        }
        if(a[0]!=0) return -1*sum;
        long long int p = 1;
        for(int  i = 0; i<10; i++){
            if(a[i]!=0)
            p*=pow(i,a[i]);
        }
        return (p-sum);
    }
};