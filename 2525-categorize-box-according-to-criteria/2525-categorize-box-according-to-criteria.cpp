class Solution {
public:
    string categorizeBox(long long length, long long breadth, long long height, long long mass) {
        bool heavy=false,bulky=false;
        if(length>=10000 || breadth>=10000 || height >= 10000) bulky=true;
        else {
            long long vol = length*breadth*height;
            if(vol>=1000000000) bulky=true;
        }
        if(mass>=100) heavy=true;
        return ((heavy&&bulky)?"Both":(heavy)?"Heavy":(bulky)?"Bulky":"Neither");
    }
};