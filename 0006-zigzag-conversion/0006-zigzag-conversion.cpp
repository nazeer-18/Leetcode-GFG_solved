class Solution {
public:
    string convert(string s, int numRows) {
        string ans;
        int j=0;
        if(numRows==1) return s;
        while(j<numRows){
            for(int i =j;i<s.length();){
                ans+=s[i];
                if((i/(numRows-1))%2==0){
                    i+=(numRows-1)*2-j*2;
                }
                else{
                    i+=(j*2);
                }
            }
            j++;
        }
        return ans;
    }
};