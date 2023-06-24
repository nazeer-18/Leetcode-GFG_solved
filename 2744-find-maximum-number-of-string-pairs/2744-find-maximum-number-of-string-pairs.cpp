class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt = 0,j,n=words.size(),i=0;
        for(; i < n; i++) {
            reverse(words[i].begin(),words[i].end());
            for(j=i+1; j < n; j++) {
                if(words[j]==words[i]){
                    words.erase(words.begin()+j);
                    words.erase(words.begin()+i);
                    n-=2;
                    i--;
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};