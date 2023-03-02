class Solution {
public:
    int compress(vector<char>& chars) {
        int i,ans= 1,cnt=1;
        char prev = '0';
        bool repeat = false;
        for( i = 1; i < chars.size(); i++) {
            if(chars[i]==chars[i-1]){
                cnt++;
                chars.erase(chars.begin()+i);
                i--;
            } else{
                if(cnt==1){
                    repeat = false;
                    ans++;
                    prev = '0';
                } 
                else{
                    if(prev == chars[i-1] && chars[i-1]!='0') {
                        chars.insert(chars.begin()+i,prev);
                        i++;
                        ans++;
                        cnt--;
                    } if(cnt==1){
                    i--;    
                    continue;
                    } 
                    prev = cnt%10+'0';
                    string s = to_string(cnt);
                    ans += s.length();
                    while(cnt){
                        chars.insert(chars.begin()+i,'0'+(cnt%10));
                        cnt/=10;
                    }
                    i+=s.length()-1;
                    cnt=1;
                }
            }
        }
        if(cnt==1){
                    return ans;
                } 
                else{
                    if(prev == chars[i-1]) {
                        chars.insert(chars.begin()+i,prev);
                        i++;
                        ans++;
                        cnt--;
                    }
                    string s = to_string(cnt);
                    ans += s.length();
                    while(cnt){
                        chars.insert(chars.begin()+i,'0'+(cnt%10));
                        cnt/=10;
                    }
                }
        return ans;
    }
};