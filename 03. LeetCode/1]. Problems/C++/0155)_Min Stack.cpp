class MinStack
{
public:
    vector<int> data;
    MinStack()
    {
        data.clear();
    }

    void push(int val)
    {
        data.push_back(val);
    }

    void pop()
    {
        if (data.empty())
            return;
        data.pop_back();
    }

    int top()
    {
        return data.back();
    }

    int getMin()
    {
        return *min_element(data.begin(), data.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */