class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int res = 0;
        for (auto &num : nums)
        {
            res = res ^ num;
        }
        return res;
    }
};