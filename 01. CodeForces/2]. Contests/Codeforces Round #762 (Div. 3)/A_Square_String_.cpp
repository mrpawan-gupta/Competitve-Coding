#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vll = vector<long long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using mii = map<int, int>;
using umii = unordered_map<int, int>;
const ll mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define p pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solveTestcases(){
    // input string
    string stringA;
    cin >> stringA;

    // check odd length
    if (stringA.size() % 2 != 0){
        cout << "NO" << endl;
        return;
    }
    else{
        // size of worksspace
        ll size_t = stringA.size() / 2;
        string sol = "YES";
        loop(i,0,size_t){
            if (stringA[i] != stringA[size_t + i]){
                sol = "NO";
                break;
            }
        }
        cout << sol << "\n";
    }
}
int main()
{
    fast;

    // no of testcases
    int t;
    cin >> t;
    while (t--)
    {
        solveTestcases();
    }

    return 0;
}
