class CountIntervals {
public:
    struct Node {
        int l;
        mutable int r;
        int w;
        bool operator < (const Node & n) const {
            return l < n.l;
        }
    };
    set<Node> Set;
    set<Node>::iterator split(int x) {
        auto it = --Set.upper_bound({x});
        if(it->l == x) return it;
        Node p = *it;
        it->r = x - 1, p.l = x;
        return Set.insert(p).first;
    };
    int result = 0;
    CountIntervals() {
        Set.insert({1, (int)2e9, 0});
    }
    
    void add(int l, int r) {
        auto it = split(l);
        auto itr = split(r + 1);
        for(; it != itr; it = Set.erase(it)) {
            if(it->w == 0) {
                result += it->r - it->l + 1;
            }
        }
        Set.insert({l, r, 1});
    }
    
    int count() {
        return result;
    }
};

