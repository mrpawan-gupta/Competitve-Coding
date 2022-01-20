class Solution
{
public:
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int low = 1;
        int high = INT_MIN;

        for (auto x : piles)
        {
            high = max(x, high);
        }

        int val = 0;
        while (low < high)
        {
            int mid = (low + high) / 2;
            val = 0;
            for (auto x : piles)
                val += (x + mid - 1) / mid;
            if (val <= h)
                high = mid;

            else
                low = mid + 1;
        }
        return low;
    }
};