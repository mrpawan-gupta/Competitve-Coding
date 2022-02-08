class Solution
{
public:
    auto intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
        -> vector<vector<int>>
    {
        vector<vector<int>> ans;
        int i = 0, j = 0;
        while (i < firstList.size() && j < secondList.size())
        {
            auto left = max(firstList[i][0], secondList[j][0]);
            auto right = min(firstList[i][1], secondList[j][1]);
            if (right >= left)
            {
                ans.push_back({left, right});
            }
            // Dicard the interval with the smaller endpoint because there's
            // no way for it to intersect with anyone else.
            if (firstList[i][1] < secondList[j][1])
            {
                ++i;
            }
            else
            {
                ++j;
            }
        }
        return ans;
    }
};