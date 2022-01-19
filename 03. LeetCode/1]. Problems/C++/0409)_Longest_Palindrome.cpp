class Solution{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char, int> count;
        int res = 0;
        bool odd = false;
        for (char ele : s)
        {
            count[ele]++;
        }
        for (int i = 0; i < count.size(); i++)
        {
            if (count[i] % 2 == 0)
            { // case1
                res += count[i];
            }
            else if (count[i] % 2 == 1)
            { // case2
                // means odd length character
                odd = true;          // so that we can add one char in the middle of the pallindrome
                res += count[i] - 1; // -1 is done to make the length even
            }
        }
        return odd == true ? res + 1 : res;
    }
};