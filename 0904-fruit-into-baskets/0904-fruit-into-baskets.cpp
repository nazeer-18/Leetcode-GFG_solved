class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()<=2) return fruits.size();
        int i = 0, j = 0, first=fruits[0], second=fruits[0], maxLen=0, lastFirst=0, lastSecond=0;
    while(i<=j && j <fruits.size()) {
        while(j<fruits.size() && second==first) {
            j++;
            second=fruits[j];
            lastFirst=j-1;
        }
        if(j==fruits.size()) {
             maxLen = max(maxLen,j-i);
            return maxLen;
        }
        if(fruits[j]==first){
            lastFirst=j;
        } 
        else if(fruits[j]==second) {
            lastSecond = j;
        }
        else{
            if(lastFirst>lastSecond){
                i = lastSecond+1;
            }
            else{
                i = lastFirst+1;
                lastFirst = j-1;
            }
            lastSecond = j;
            first = fruits[i];
            second = fruits[j];
        }
          maxLen = max(maxLen,j-i+1);
        j++;
    } 
        return maxLen;
    }
};