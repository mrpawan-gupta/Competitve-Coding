class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int i = 0;
        // mountain array if and only if: arr.length >= 3
        if (arr.size() < 3)
        {
            return false;
        }
        // arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
        // finding that i here
        for (i = 0; i < arr.size() - 1; i++)
        {
            // should be strictly increasing
            if (arr[i] == arr[i + 1])
            {
                return false;
            }
            else if (arr[i] > arr[i + 1])
            {
                break;
            }
        }
        // checking for contains one side one like [1,2,3,4,5] and [5,4,3,2,1]
        if (arr[0] > arr[1] || i == arr.size() - 1)
        {
            return false;
        }

        // confirming arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
        for (; i < arr.size() - 1; i++)
        {
            if (arr[i] <= arr[i + 1])
                return false;
        }
        return true;
    }
};