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

int main()
{
    fast;

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, n1, n2, j = 0, k = 0, sum1 = 0;
        cin >> n;
        if (n % 2 == 0)
            n1 = n / 2;
        else
            n1 = n / 2 + 1;
        n2 = n - n1;
        int zeros[n1], ones[n2];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cin >> zeros[j];
                j++;
            }
            else
            {
                cin >> ones[k];
                sum1 += ones[k];
                k++;
            }
        }
        sort(zeros, zeros + n1);
        reverse(zeros, zeros + n1);
        sort(ones, ones + n2);
        j = 0, k = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << zeros[j] << " ";
                j++;
            }
            else
            {
                cout << ones[k] << " ";
                k++;
            }
        }
        cout << endl;
        int res = 0;
        j = 0, k = 0;
        for (int i = 0; i < n; i += 2)
        {
            res += zeros[j] * sum1;
            sum1 -= ones[k];
            j++;
            k++;
        }
        cout << res << endl;
    }

    return 0;
}
