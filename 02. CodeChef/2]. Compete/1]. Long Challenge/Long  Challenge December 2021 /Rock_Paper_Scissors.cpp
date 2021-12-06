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

char match(char a, char b){
    if(a==b){
        return a;
    }
    else if(a=='R'&& b=='P' || a=='P' && b=='R'){
        return 'P';
    }
    else if (a == 'R' && b == 'S' || a == 'S' && b == 'R'){
        return 'R';
    }
    else if (a == 'P' && b == 'S' || a == 'S' && b == 'P'){
        return 'S';
    }
    else {
        assert(false);
    }
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;

        vc r(n + 1);
        vc p(n + 1);
        vc s(n + 1);

        vc c(n + 1);

        c[n] = str[n - 1];
        r[n] = match('R', str[n - 1]);
        p[n] = match('P', str[n - 1]);
        s[n] = match('S', str[n - 1]);

        for (int i = n - 1; i >= 1; i--)
        {
            char r_res = match('R', str[i - 1]);
            if (r_res == 'R')
            {
                r[i] = r[i + 1];
            }
            else if (r_res == 'P')
            {
                r[i] = p[i + 1];
            }
            else if (r_res == 'S')
            {
                r[i] = s[i + 1];
            }

            char p_res = match('P', str[i - 1]);
            if (p_res == 'R')
            {
                p[i] = r[i + 1];
            }
            else if (p_res == 'P')
            {
                p[i] = p[i + 1];
            }
            else if (p_res == 'S')
            {
                p[i] = s[i + 1];
            }

            char s_res = match('S', str[i - 1]);
            if (s_res == 'R')
            {
                s[i] = r[i + 1];
            }
            else if (s_res == 'P')
            {
                s[i] = p[i + 1];
            }
            else if (s_res == 'S')
            {
                s[i] = s[i + 1];
            }

            if (str[i - 1] == 'R')
            {
                c[i] = r[i + 1];
            }

            else if (str[i - 1] == 'P')
            {
                c[i] = p[i + 1];
            }
            else if (str[i - 1] == 'S')
            {
                c[i] = s[i + 1];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << c[i];
        }
        cout << '\n';
    }

    return 0;
}
