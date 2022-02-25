class Solution
{
public:
    int compareVersion(string version1, string version2)
    {

        int scoreV1 = 0, scoreV2 = 0, i, j, currentVersionScore = 0;
        i = j = 0;

        while (i < version1.size() or j < version2.size())
        {
            currentVersionScore = 0;

            while (i < version1.size() and version1[i] != '.')
            {
                currentVersionScore = currentVersionScore * 10 + (version1[i] - '0');
                i++;
            }
            scoreV1 += currentVersionScore;
            currentVersionScore = 0;

            while (j < version2.size() and version2[j] != '.')
            {
                currentVersionScore = currentVersionScore * 10 + (version2[j] - '0');
                j++;
            }

            scoreV2 += currentVersionScore;
            if (scoreV1 < scoreV2)
                return -1;
            else if (scoreV1 > scoreV2)
                return 1;
            i++;
            j++;
        }

        return 0;
    }
};
