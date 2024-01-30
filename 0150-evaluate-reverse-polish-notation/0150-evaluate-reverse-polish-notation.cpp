class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n1,n2;
        for(auto it:tokens){
            if(it!="+" && it!="-" && it!="*" && it!="/"){
                st.push(stoi(it));
            }
            else {
                n2=st.top();
                st.pop();
                n1=st.top();
                st.pop();
                st.push((it=="+")?(n1+n2):(it=="-")?(n1-n2):(it=="*")?(n1*n2):(n1/n2));
               // cout<<st.top()<<endl;
            }
        }
        return st.top();
    }
};