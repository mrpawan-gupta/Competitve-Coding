class Solution
{
public:
    vector<int> temp;
    vector<int> og;
    Solution(vector<int> &nums)
    {
        temp = nums;
        og = nums;
    }

    vector<int> reset()
    {
        return og;
    }

    vector<int> shuffle()
    {
        if (temp.size() == 1)
            return temp;
        for (int i = 0; i < temp.size(); i++)
        {
            swap(temp[i], temp[rand() % temp.size()]);
        }
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */