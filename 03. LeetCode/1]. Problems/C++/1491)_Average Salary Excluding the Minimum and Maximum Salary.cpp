class Solution
{
public:
    double average(vector<int> &salary)
    {
        float a = *max_element(salary.begin(), salary.end());
        float b = *min_element(salary.begin(), salary.end());

        return double(accumulate(salary.begin(), salary.end(), 0) - a - b) / (salary.size() - 2);
    }
};