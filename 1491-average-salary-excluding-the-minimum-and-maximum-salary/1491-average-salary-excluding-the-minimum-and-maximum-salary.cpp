class Solution {
public:
    double average(vector<int>& salary) {
        double sum;
        sum = accumulate(salary.begin(),salary.end(),0);
        sum-=(*max_element(salary.begin(),salary.end()) + *min_element(salary.begin(),salary.end()));
        return sum/(salary.size()-2);
    }
};