class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int ans = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        int sum = 0, count = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (m.find(sum - k) != m.end())
            {
                count += m[sum - k];
            }
            m[sum]++;
        }

        return count;
    }
};