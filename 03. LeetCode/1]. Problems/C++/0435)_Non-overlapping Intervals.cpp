bool helper(vector<int> &a, vector<int> &b)
{
    return a[1] < b[1];
}

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {

        int n = intervals.size(), i = 1, j = 0, ans = 0;
        sort(intervals.begin(), intervals.end(), helper);
        while (i < n)
            intervals[j][1] > intervals[i][0] ? ans++ : j = i, i++;

        return ans;
    }
}