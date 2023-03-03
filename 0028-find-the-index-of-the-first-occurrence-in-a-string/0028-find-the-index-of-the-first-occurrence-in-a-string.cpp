class Solution {
public:
    int strStr(string haystack, string needle) {
     int i = 0;
        while(i<haystack.length()){
            if(haystack[i]==needle[0]){
                int j = 0;
                while(j+i<haystack.length() && j<needle.length() && needle[j]==haystack[i+j]){
                    j++;
                } if(j==needle.length()) return i;
            }  i++;
        }
        
        return -1;
    }
};