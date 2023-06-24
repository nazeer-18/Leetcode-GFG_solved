class Solution {
public:
    int longestString(int x, int y, int z) {
       int ans = z*2;
        if(x==0 && y == 0) return ans;
        if(x==0 || y==0) {
            ans+=2;
        }else{
            ans+= min(x,y)*4;
            if(x!=y) ans+=2;
        }
        return ans;
    }
};