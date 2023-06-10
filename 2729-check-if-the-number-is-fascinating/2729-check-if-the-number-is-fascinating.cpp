class Solution {
public:
    bool isFascinating(int n) {
        int k = n;
        while(k){
            if(k%10==0) return false;
            k/=10;
        }
        k = 2*n;
        int l = 3*n;
        int a[10]={0},temp;
        while(n){
            temp=n%10;
            a[temp]++;
            n/=10;
            if(a[temp]>1) return false;
        }
        while(k){
            temp=k%10;
            a[temp]++;
            k/=10;
            if(a[temp]>1) return false;
        }
                while(l){
            temp=l%10;
            a[temp]++;
            l/=10;
            if(a[temp]>1) return false;
        }
        for(int i = 1; i < 10 ; i++){
            if(a[i]!=1) return false;
        }
        return true;
    }
};