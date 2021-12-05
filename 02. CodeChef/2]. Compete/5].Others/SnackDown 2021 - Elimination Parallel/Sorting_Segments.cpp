#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vll = vector<long long int>;
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
        int n, k;
        cin >> n >> k;
        vll v(n), x(n), y;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        y = v;
        sort(y.begin(), y.end());
        int start = 0, last = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
            {
                start = i;
                break;
            }
        }
        int i = n - 1;
        while (i >= 0)
        {
            if (v[i] != i + 1)
            {
                last = i;
                break;
            }
            i--;
        }
        if (v == y)
        {
            cout << "0\n";
            continue;
        }
        if (last - start < k)
        {
            cout << "1" << endl;
            continue;
        }
        vll c1(n), c2(n);
        for (int i = 0; i < n; i++)
        {
            c1[i] = v[i];
            c2[i] = v[i];
        }
        int x1 = start + k, x2 = last - k + 1, x3 = last - k + 1;
        sort(c2.begin() + x3, c2.begin() + last + 1);
        sort(c2.begin() + start, c2.begin() + start + k);
        sort(c1.begin() + start, c1.begin() + x1);
        sort(c1.begin() + x2, c1.begin() + last + 1);
        if (c1 == y)
        {
            cout << "2\n";
        }
        else if (c2 == y)
        {
            cout << "2\n";
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}

