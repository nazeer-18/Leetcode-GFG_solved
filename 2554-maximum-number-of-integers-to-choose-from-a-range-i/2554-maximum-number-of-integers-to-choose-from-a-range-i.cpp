class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        banned.erase(unique(banned.begin(),banned.end()),banned.end());
        int cnt=0,j=0,i=1;
        for(j = 0;j<banned.size(); j++) {
            while(banned[j]>i){
                if(maxSum>=i && i<= n){
                    maxSum-=i;
                    cnt++;
                    i++;
                }
                else break;
            }
            i++;
        }
        while(i<=n){
             if(maxSum>=i){
                    maxSum-=i;
                    cnt++;
                    i++;
            }else break;
        }
        return cnt;
    }
};