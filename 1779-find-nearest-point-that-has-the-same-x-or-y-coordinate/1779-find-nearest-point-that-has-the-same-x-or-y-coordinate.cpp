class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mini = INT_MAX,idx=INT_MAX;
        for(auto i : points){
                if(i[0]==x || i[1]==y) {
                    mini = min(abs(i[0]-x)+abs(i[1]-y),mini);
                }
        }
        cout<<mini<<endl;
        for(int i = 0; i < points.size(); i++){
             if((points[i][0]==x || points[i][1]==y) && (mini==abs(points[i][0]-x)+abs(points[i][1]-y))){
                        idx = min(idx,i);
            }
        }cout<<idx<<endl;
        return idx==INT_MAX?-1:idx;
    }
};