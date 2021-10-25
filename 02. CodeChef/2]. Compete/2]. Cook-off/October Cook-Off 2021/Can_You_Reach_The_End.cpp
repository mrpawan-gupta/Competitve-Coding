#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct Cell
{
    int row, col;
};

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> blocks(n);
        for(int i = 0; i < n; i++) {
            cin >> blocks[i].first >> blocks[i].second;
        }
        sort(blocks.begin(), blocks.end());
        bool yes = true;
        int row = -1, col = -1;
        for(int i = 0; i < n; i++) {
            if(i > 0 && blocks[i].second > blocks[i - 1].second) {
                row = -1;
                col = -1;
            }
            
            if(blocks[i].first == 1) {
                col = blocks[i].second;
                row = -1;
            } else if(blocks[i].second == n) {
                row = blocks[i].first;
                col = -1;
                // cout << row << '\n';
            }

            if(blocks[i].second == 1) {
                if(blocks[i].first == col) {
                    yes = false;
                    break;
                }
            } else if(blocks[i].first == n) {
                // cout << blocks[i].second << '\n';
                if(blocks[i].second == row) {
                    yes = false;
                    break;
                }
            } 
            // cout << i << ' ' << row << '\n';

        }
        cout << (yes ? "YES\n" : "NO\n");
    }
    return 0;
}
