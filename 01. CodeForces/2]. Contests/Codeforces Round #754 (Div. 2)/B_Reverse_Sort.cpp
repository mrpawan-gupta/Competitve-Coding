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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string temp = s;
        sort(temp.begin(), temp.end());
        vector<int> v;
        for (int i = 0; i < n; i++)
            if (s[i] != temp[i])
                v.push_back(i + 1);
        if (v.size() == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        cout << 1 << "\n" << v.size() << " ";
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
