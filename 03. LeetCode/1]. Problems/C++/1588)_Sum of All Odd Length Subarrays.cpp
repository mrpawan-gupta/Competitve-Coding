class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int total = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            int curr_sum = 0;
            for (int j = i; j < arr.size(); j++)
            {
                curr_sum += arr[j];
                if ((j - i + 1) % 2 != 0)
                    total += curr_sum;
            }
        }
        return total;
    }
};