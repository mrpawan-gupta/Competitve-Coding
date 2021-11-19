#include <bits/stdc++.h>
using namespace std;
using l = long;
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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

vector<int> p(55);

int find_p(int v)
{
    if (v == p[v])
        return v;
    return p[v] = find_p(p[v]);
}

void set_union(int a, int b)
{
    a = find_p(a);
    b = find_p(b);
    if (a != b)
        p[b] = a;
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        p.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            p[i] = i;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(arr[i], arr[j]) == 1)
                    set_union(i, j);
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (find_p(i) == i)
                cnt++;
        }
        if (cnt == 1)
        {
            cout << "0" << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
        {
            int minPrime = *min_element(arr.begin(), arr.end());
            if (minPrime == 47)
                arr[0] = 43;
            else
                arr[0] = 47;
            cout << "1" << endl;
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    return 0;
}
