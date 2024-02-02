class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int temp=low,start=0,cnt=0,i=1,d=0;
        while(temp){
            cnt++;
            temp/=10;
        }
        while(i<=cnt){
            start=start*10+i;
            d=d*10+1;
            i++;
        }
        temp=start;
        while(temp<low && temp%10!=0){
            temp+=d;
        }
        while(temp<=high){ 
            while(temp%10!=0 && temp<=high){
                ans.push_back(temp);
                temp+=d;
            }
            d=d*10+1;
            cnt++;
            start=start*10+cnt;
            temp=start;
        }
        return ans;
    }
};