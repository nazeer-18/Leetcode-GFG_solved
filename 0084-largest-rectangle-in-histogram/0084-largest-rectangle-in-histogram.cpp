class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<int> st;
        int i = 0,maxArea=0;
        while(i<heights.size()){
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                int height = heights[st.top()];
                st.pop();
                if(st.empty()){
                    maxArea = max(maxArea,height*i);    
                }
                else{
                    maxArea = max(maxArea,height*(i-st.top()-1));
                }
            }
            st.push(i);
            i++;
        }
        return maxArea;
    }
};