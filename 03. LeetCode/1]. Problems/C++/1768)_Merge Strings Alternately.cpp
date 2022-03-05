class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string res;
        bool flag = 1;
        int i = 0, j = 0;
        while (i < word1.size() && j < word2.size())
        {
            if (flag)
                res += word1[i++];
            else
                res += word2[j++];
            flag = !flag;
        }
        while (i < word1.size())
            res += word1[i++];
        while (j < word2.size())
            res += word2[j++];
        return res;
    }
};