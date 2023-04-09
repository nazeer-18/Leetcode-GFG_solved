class Solution {
public:
    bool isPrime(int a) {
        if(a<2) return false;
        for(int i = 2; i <= a/2; i++) {
            if(a%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;
        int j = 0,k=nums.size()-1;
        vector<int> a;
        for(int  i = 0; i< nums.size(); i++) {
            a.push_back(nums[i][j]);
            a.push_back(nums[i][k]);
            j++;k--;
        }
        sort(a.begin(),a.end());
        for(int i = 1; i < a.size(); i++){
            if(a[i]==a[i-1]){
                i--;
                a.erase(a.begin()+i);
            } 
            
        }
        for(int i = a.size()-1;i>=0; i--){
            if(isPrime(a[i])) return a[i];
        }
        return 0;
    }
};