class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        unordered_map<char, int> ord;
        for (int i = 0; i < 26; i++)
            ord[order[i]] = i;

        for (int i = 0; i < words.size() - 1; i++)
        {
            string first = words[i];
            string second = words[i + 1];
            int p1, p2;
            p1 = p2 = 0;
            while (p1 < first.length() && p2 < second.length())
            {
                if (ord[first[p1]] > ord[second[p2]])
                    return false;
                else if (ord[first[p1]] < ord[second[p2]])
                    break;
                else
                {
                    p1++;
                    p2++;
                }
            }
            if (p1 != first.length() && p2 == second.length())
                return false;
        }
        return true;
    }
};