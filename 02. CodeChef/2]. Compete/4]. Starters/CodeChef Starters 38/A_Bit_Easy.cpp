#include <bits/stdc++.h>
using namespace std;

#define int long long

template <int alpha>
class TrieNode{
public:
    TrieNode *child[alpha];
    int pre;
    TrieNode(){
        for (int i = 0; i < alpha; i++)
            child[i] = NULL;
        pre = 0;
    }
    int convert(int n, int i){
        return ((n & (1LL << i)) > 0);
    }
    void insert(int n) {
        TrieNode *curr = this;
        for (int i = 62; i >= 0; i--){
            int ind = convert(n, i);
            if (!curr->child[ind])
                curr->child[ind] = new TrieNode();
            curr = curr->child[ind];
            curr->pre++;
        }
    }
    void del(int n) {
        TrieNode *curr = this;
        for (int i = 62; i >= 0; i--){
            int ind = convert(n, i);
            if (curr->child[ind]->pre == 1){
                curr->child[ind] = NULL;
                break;
            }
            curr = curr->child[ind];
            curr->pre--;
        }
    }
    int query(int n, int k) { // k*x = n
        TrieNode *curr = this;
        for (int i = 62; i >= 0; i--){
            int ind = convert(k, i);
            int have = convert(n, i);
            if (have){
                if (curr->child[1 - ind]) {
                    curr = curr->child[1 - ind];
                }
                else
                    return 0;
            }
            else {
                if (curr->child[ind]) {
                    curr = curr->child[ind];
                }
                else
                    return 0;
            }
        }
        return curr->pre;
    }
};

int main(int argc, char const *argv[]){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        TrieNode<2> *root = new TrieNode<2>();
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        reverse(a.begin(), a.end());
        int ans = 0;
        for (int x : a)
        {
            if (k >= x)
                ans += root->query(k - x, x);
            root->insert(x);
        }
        cout << ans << '\n';
    }
    return 0;
}