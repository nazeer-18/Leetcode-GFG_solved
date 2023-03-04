class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int a=-1,b=-1,c,d;
        for(int i = 0; i < s1.length(); i++) {
            if(s1[i]!=s2[i]){
                if(a==-1)
                a = i;
                else if(b==-1)
                    b = i;
                else return false;
            }
        }
        if(a!=-1 && b==-1) return false;
        if(a==-1 && b==-1) return true;
        swap(s1[a],s1[b]);
        if(s1==s2) return true;
        return false;
    }
};