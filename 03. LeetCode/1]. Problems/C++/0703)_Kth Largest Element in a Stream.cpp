class KthLargest{
    multiset<int> s;
    int k;

public:
    KthLargest(int k, vector<int> &nums){
        this->k = k;
        for (auto x : nums)
        {
            s.insert(x);
        }
    }

    int add(int val){
        s.insert(val);
        auto it = s.begin();
        for (int i = 0; i < (s.size() - k); i++)
            it++;
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */