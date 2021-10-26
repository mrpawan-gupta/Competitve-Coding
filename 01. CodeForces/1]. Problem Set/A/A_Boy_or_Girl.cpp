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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    string a;
    cin >> a;

    int num = 0;
    int pas = 1;

    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                num++;
            }
        }
        if (num == 0)
        {
            pas++;
        }
        num = 0;
    }
    if (pas % 2 == 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}
