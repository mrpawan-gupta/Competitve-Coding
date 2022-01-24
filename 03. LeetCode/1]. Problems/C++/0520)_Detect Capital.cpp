class Solution
{
public:
    bool detectCapitalUse(string su)
    {
        string temp = su;
        transform(su.begin(), su.end(), temp.begin(), ::toupper);
        if (temp == su)
            return true;
        temp = su;
        transform(su.begin(), su.end(), temp.begin(), ::tolower);
        if (temp == su)
            return true;
        temp = su;
        transform(su.begin() + 1, su.end(), temp.begin() + 1, ::tolower);
        if (temp == su)
            return true;
        return false;
    }
};