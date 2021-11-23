#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using va = vector<bool>;
using vva = vector<va>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vll = vector<long long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pa push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    fast;

    int n;
    cin >> n;
    int a[n];
    int sum = 0, sum2 = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum = sum / 2;
    sort(a, a + n);
    for (int j = n - 1; j >= 0; j--)
    {
        sum2 += a[j];
        count++;
        if (sum < sum2)
            break;
    }
    cout << count;

    return 0;
}
