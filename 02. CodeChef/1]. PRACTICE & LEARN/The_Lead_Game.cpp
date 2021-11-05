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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, winner, lead = 0, dif = 0;

    for (int i = 0; i < n; i++)
    {
        int p1, p2;
        cin >> p1 >> p2;
        sum1 += p1;
        sum2 += p2;

        if (sum1 > sum2)
        {
            dif = sum1 - sum2;

            if (dif > lead)
            {
                lead = dif;
                winner = 1;
            }
        }
        else
        {
            dif = sum2 - sum1;
            if (dif > lead)
            {
                lead = dif;
                winner = 2;
            }
        }
    }
    cout << winner << " " << lead << endl;
    return 0;
}
