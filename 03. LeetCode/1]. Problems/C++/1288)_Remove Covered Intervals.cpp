bool campare(vector<int> a, vector<int> b)
{
    if (a[0] < b[0])
    {
        return true;
    }
    if (a[0] == b[0] && a[1] > b[1])
    {
        return true;
    }
    return false;
}
class Solution
{
public:
    int removeCoveredIntervals(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end(), campare);
        int anssize = intervals.size();
        if (anssize == 1)
        {
            return anssize;
        }
        int maxreach = -1;
        for (int i = 0; i < intervals.size(); i++)
        {
            (intervals[i][1] <= maxreach) ? anssize-- : (maxreach = intervals[i][1]);
        }
        return anssize;
    }
};