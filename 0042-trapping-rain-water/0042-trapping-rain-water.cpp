class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0,i=0;
        stack<int> v;
        while(i<height.size()){
            while(!v.empty() && height[v.top()]  <= height[i]){
                int h = height[v.top()];
                v.pop();
                if(!v.empty()){
                    int w = i-v.top()-1;
                    ans+=w*(max(0,min(height[v.top()]-h,height[i]-h)));
                }
            }
            v.push(i);
            i++;
        }
        return ans;
    }
};