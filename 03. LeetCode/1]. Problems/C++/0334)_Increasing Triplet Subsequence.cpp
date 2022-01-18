class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int amin = INT_MAX, amid = INT_MAX, bmin = INT_MAX, bmid = INT_MAX;

        bool ans = false;
        for (int i = 0; i < nums.size(); i++)
        {
            if (amid < nums[i])
            {
                ans = true;
                break;
            }

            if (bmin > nums[i])
            {
                bmin = nums[i];
                bmid = INT_MAX;
                continue;
            }

            if (bmin == nums[i])
                continue;

            if (bmid > nums[i])
                bmid = nums[i];

            if (amin >= bmin && amid > bmid)
            {
                amin = bmin;
                amid = bmid;
            }
        }
        return ans;
    }
};