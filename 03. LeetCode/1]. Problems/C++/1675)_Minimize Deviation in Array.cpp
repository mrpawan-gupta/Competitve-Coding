class Solution
{
public:
    int minimumDeviation(vector<int> &nums)
    {
        priority_queue<int> pq;
        int minval = INT_MAX;
        for (int i : nums)
        {
            if (i % 2 == 1)
                i *= 2;
            minval = min(minval, i);
            pq.push(i);
        }
        int diff = INT_MAX;
        while (!pq.empty() && pq.top() % 2 == 0)
        {
            int maxval = pq.top();
            pq.pop();
            diff = min(diff, maxval - minval);
            minval = min(minval, maxval / 2);
            pq.push(maxval / 2);
        }
        return min(diff, pq.top() - minval);
    }
};