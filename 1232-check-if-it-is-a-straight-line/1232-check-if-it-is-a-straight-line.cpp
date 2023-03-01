class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& n) {
        double slope;
        if(n[1][0]==n[0][0]) slope = INT_MAX;
        else
        slope = (n[1][1] - n[0][1])/(double)(n[1][0]-n[0][0]);
        for(int i = 2; i < n.size(); i++) {
            cout<<slope<<endl;
            if(n[i][0]==n[0][0]){
                if(slope==INT_MAX) continue;
                else return false;
            }
            else if(slope!=((n[i][1] - n[0][1])/(double)(n[i][0]-n[0][0]))) return false;
        }
        return true;
    }
};