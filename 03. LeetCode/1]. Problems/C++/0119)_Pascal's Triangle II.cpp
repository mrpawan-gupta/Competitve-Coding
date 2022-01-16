class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> vec;
        if (rowIndex == 0)
        {
            vec.push_back(1);
            return vec;
        }
        vec = getRow(rowIndex - 1);
        for (int i = 0; i < vec.size() - 1; ++i)
        {
            vec[i] = (vec[i] + vec[i + 1]);
        }
        vec.insert(vec.begin(), 1);
        return vec;
    }
};