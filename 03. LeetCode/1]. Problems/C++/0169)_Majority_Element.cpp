class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int counter = 0, majority;
        for (int num : nums)
        {
            if (counter == 0)
                majority = num;

            counter += num == majority ? 1 : -1;
        }

        return majority;
    }
};