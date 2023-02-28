class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i = 0, j = 0,k=0, n = word1.size(),m = word2.size();
        while(i<n && j < m){
            if(k%2==0){
                ans+=word1[i];
                i++;
            }else{
                ans+=word2[j];
                j++;
            }
            k++;
        }while(i<n){
            ans+=word1[i];
            i++;
        }
        while(j<m){
            ans+=word2[j];
            j++;
        }
        return ans;
    }
};