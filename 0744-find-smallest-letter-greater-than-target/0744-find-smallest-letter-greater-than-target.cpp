class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0, n = letters.size();
        for(i=0;i<n; i++){
            if(letters[i]>target){
                return letters[i];
            }
        }
        return letters[0];
    }
};