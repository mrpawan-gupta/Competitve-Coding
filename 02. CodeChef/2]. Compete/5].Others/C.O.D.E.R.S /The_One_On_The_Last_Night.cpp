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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        long n, k;
        cin >> n >> k;

        priority_queue<int, vector<int>, greater<int>> q;
        while (n > 0)
        {
            q.push(n % 10);
            n /= 10;
        }
        while (k--)
        {
            ll x = q.top();
            if (x == 9)
            {
                break;
            }
            q.pop();
            q.push(x + 1);
        }
        ll c = 1;
        while (!q.empty())
        {
            c *= q.top();
            q.pop();
        }
        cout << c << endl;
    }

    return 0;
}
