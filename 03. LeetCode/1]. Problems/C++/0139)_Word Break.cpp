class Solution
{
public:
    bool util(string &s, vector<string> &wordDict, int idx, unordered_set<string> &mySet, vector<bool> &dp)
    {
        if (idx == s.size())
            return true;
        if (dp[idx] == false)
            return false;

        for (auto w : wordDict)
        {
            string temp = s.substr(idx, w.size());
            if (idx + w.size() <= s.size() && mySet.find(temp) != mySet.end())
            {
                if (util(s, wordDict, idx + w.size(), mySet, dp))
                    return true;
            }
        }
        dp[idx] = false;
        return false;
    }
    bool wordBreak(string &s, vector<string> &wordDict)
    {
        unordered_set<string> mySet;
        vector<bool> dp(s.size(), true);

        for (auto w : wordDict)
            mySet.insert(w);

        return util(s, wordDict, 0, mySet, dp);
    }
};