class FreqStack
{
    int id = 0;
    priority_queue<tuple<int, int, int>> pq;
    unordered_map<int, int> map;

public:
    FreqStack()
    {
    }

    void push(int val)
    {
        pq.push(make_tuple(++map[val], ++id, val));
    }

    int pop()
    {
        auto top = pq.top();
        pq.pop();
        int val = get<2>(top);
        map[val]--;
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */