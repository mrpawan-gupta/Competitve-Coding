class Solution
{
public:
    int find_bits(int n)
    {
        int ans(0);
        while (n)
        {
            ans++;
            n = n & n - 1;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        for (auto x : arr)
        {
            mp[x] = find_bits(x);
        }

        sort(arr.begin(), arr.end(), [&](int &a, int &b)
             {
            if(mp[a] != mp[b])
                return mp[a] < mp[b];
            return a < b; });
        return arr;
    }
};