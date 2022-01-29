class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        int p1{0};
        int maxA = 0;
        int currentA = 0;
        stack<int> values;
        stack<int> index;
        values.push(-1);
        index.push(-1);
        int stacktop;

        while (!values.empty())
        {

            stacktop = values.top();
            if (p1 >= n)
                heights.push_back(-1);

            if (stacktop < 0 && heights[p1] < 0)
                break;
            if (heights[p1] >= stacktop)
            {
                values.push(heights[p1]);
                index.push(p1);
                p1++;
            }
            else
            {
                int cur_h = values.top();
                index.pop();
                int cur_i = index.top();
                values.pop();
                currentA = cur_h * (p1 - cur_i - 1);
                maxA = max(maxA, currentA);
            }
        }
        return maxA;
    }
};