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
    for (int i = 0; i < t; i++)
    {
        long long int n;
        long long int v;
        cin >> n;
        cin >> v;

        long long int max = (n * (n - 1)) / 2;
        long long int min;
        if (v >= n)
        {
            min = n - 1;
        }
        else
        {

            min = v - 1 + ((n - v) * (n - v + 1)) / 2;
        }
        cout << max << " " << min << endl;
    }

    return 0;
}
