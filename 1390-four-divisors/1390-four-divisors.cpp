class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0,cnt=2,i,t,temp=0;
        for(auto n:nums){
            cnt=2;
            i=2;
            t=n/2;
            temp=1+n;
            while(i<=t){
                if(n%i==0){
                    cnt--;
                    temp+=i;
                    if(n/i!=i) {
                        cnt--;
                        temp+=n/i;
                    }
                    t=n/i-1;
                }
                //cout<<i<<" " <<cnt<<" "<<temp<<"  "<<t<<endl;
                i++;
                if(cnt<0) break;
            }
            if(cnt==0){
                ans+=temp;
            }
        }
        return ans;
    }
};