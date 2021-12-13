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

    int n, i;
    while (cin >> n){
        int a[n + 2];
        for (i = 1; i <= n; i++)
            cin >> a[i];
        int left = 1, right = n, s = 0, d = 0;
        i = 1;
        while (left <= right){
            if (i % 2 == 1){
                if (a[left] >= a[right])
                    s += a[left++];
                else
                    s += a[right--];
            }
            else{
                if (a[left] >= a[right])
                    d += a[left++];
                else
                    d += a[right--];
            }
            i++;
        }
        cout << s << " " << d << endl;
    }
    return 0;
}
