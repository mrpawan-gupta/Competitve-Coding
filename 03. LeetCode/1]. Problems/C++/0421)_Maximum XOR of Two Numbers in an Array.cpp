struct Trie
{
    map<int, Trie *> child;
};

class Solution{
private:
    Trie *m_root;

public:
    int findMaximumXOR(vector<int> &nums) {
        m_root = new Trie;
        int maxXor = 0;

        for (auto num : nums){
            Trie *cur = m_root;
            for (int i = 31; i >= 0; i--){
                int b = GetBit(num, i);

                if (cur->child.count(b) == 0)
                    cur->child[b] = new Trie;

                cur = cur->child[b];
            }
            maxXor = max(maxXor, MaxXor(num));
        }

        return maxXor;
    }

    int MaxXor(int num){
        Trie *cur = m_root;
        int maxXor = 0;

        for (int i = 31; i >= 0; i--){
            int curBit = GetBit(num, i);  
            int reqBit = (curBit == 0) ? 1 : 0; 

            if (cur->child.count(reqBit) != 0){
                maxXor |= (1 << i);
                cur = cur->child[reqBit];
            }
            else{
                cur = cur->child[curBit];
            }
        }

        return maxXor;
    }

    inline int GetBit(int num, int pos){
        return (num & (1 << pos)) ? 1 : 0;
    }
};