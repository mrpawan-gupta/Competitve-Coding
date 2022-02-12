#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define si set<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define msi map<string, int>
#define pb push_back
#define in insert
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;


int arr[105];
char str[35];

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n,m, i, a, b, l, p;

    while (scanf("%d %d", &n, &m) != EOF) {
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        msi mp;
        msi ::iterator it;

        for (i = 0; i < m; i++){
            scanf("%s", str);
            ++mp[str];
        }

        vi v;

        for (it = mp.begin(); it != mp.end(); it++)
            v.pb(it->second);

        p = l = v.size();
        a = b = 0;

        sort(arr, arr + n);
        sort(v.begin(), v.end());

        for (i = 0; i < l; i++)
            a += arr[i] * v[l - 1 - i];

        for (i = n - 1; i >= n - l; i--)
            b += arr[i] * v[--p];

        printf("%d %d\n", a, b);

        v.clear();
        mp.clear();
    }
    return 0;
}
