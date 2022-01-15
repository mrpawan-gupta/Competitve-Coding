class MyHashMap
{
    int key_space = 2069;
    vector<vector<pair<int, int>>> cache = vector<vector<pair<int, int>>>(key_space);

public:
    MyHashMap() {}

    void put(int key, int value)
    {
        int hash = key % key_space;
        if (cache[hash].empty())
        {
            cache[hash].push_back(make_pair(key, value));
        }
        else
        {
            bool found = false;
            for (auto &p : cache[hash])
            {
                if (p.first == key)
                {
                    found = true;
                    p.second = value;
                }
            }
            if (!found)
                cache[hash].push_back(make_pair(key, value));
        }
    }

    int get(int key)
    {
        int hash = key % key_space;
        if (cache[hash].empty())
            return -1;

        for (auto p : cache[hash])
        {
            if (p.first == key)
            {
                return p.second;
            }
        }
        return -1;
    }

    void remove(int key)
    {
        int hash = key % key_space;
        if (cache[hash].empty())
            return;

        for (auto it = cache[hash].begin(); it != cache[hash].end(); it++)
        {
            if (it->first == key)
            {
                cache[hash].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */