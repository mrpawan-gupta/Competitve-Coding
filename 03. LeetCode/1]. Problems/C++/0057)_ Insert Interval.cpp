class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if (intervals.empty()) {
            intervals.push_back(newInterval);
            return move(intervals);
        }
        auto lower = lower_bound(intervals.begin(), intervals.end(), newInterval, [](auto a, auto b) {
            return a[0] < b[0];
        });
        if (lower == intervals.end()) {
            if (intervals.back()[1] >= newInterval[0]) intervals[intervals.size() - 1][1] = max(intervals.back()[1], newInterval[1]);
            else intervals.push_back(newInterval);
        }
        else {
            auto i = lower - intervals.begin();
            if (i > 0 && intervals[i - 1][1] >= newInterval[0]) --i;
            auto j = i;
            while (j < intervals.size() && intervals[j][0] <= newInterval[1]) ++j;
            if (j > i) {
                intervals[i] = {min(intervals[i][0], newInterval[0]), max(intervals[j - 1][1], newInterval[1])};
                intervals.erase(intervals.begin() + i + 1, intervals.begin() + j);
            }
            else intervals.insert(intervals.begin() + i, newInterval);
        }
        return move(intervals);
    }
};