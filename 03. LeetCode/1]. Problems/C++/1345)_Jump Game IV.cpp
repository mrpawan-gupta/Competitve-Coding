class Solution
{
public:
    int minJumps(vector<int> &arr)
    {
        int n = arr.size();
        if (n == 1)
            return 0;

        unordered_map<int, vector<int>> mp;

        int step = 0;

        // fill map
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]].push_back(i);
        }

        // queue
        queue<int> q;
        q.push(0);

        while (!q.empty())
        {
            step++;
            int size = q.size();

            for (int i = 0; i < size; i++)
            {
                int j = q.front();
                q.pop();

                // jump to j-1
                if (j - 1 >= 0 && mp.find(arr[j - 1]) != mp.end())
                {
                    q.push(j - 1);
                }

                // jump to j+1
                if (j + 1 < n && mp.find(arr[j + 1]) != mp.end())
                {
                    if (j + 1 == n - 1)
                        return step;
                    q.push(j + 1);
                }

                // jump to equal
                if (mp.find(arr[j]) != mp.end())
                {
                    for (auto k : mp[arr[j]])
                    {
                        if (k != j)
                        {
                            if (k == n - 1)
                                return step;
                            q.push(k);
                        }
                    }
                }
                mp.erase(arr[j]);
            }
        }
        return step;
    }
};