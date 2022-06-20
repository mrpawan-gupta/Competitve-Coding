#include <bits/stdc++.h>

using namespace std;

vector < int > go = {0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
int inf = 1e9 + 7;

int get(int x) {
    string s = to_string(x);
    if ((int)s.size() == 1) s = "0" + s;
    string answ = "";
    for (int i = 1; i >= 0; --i) {
        if (go[s[i] - '0'] == -1) return inf;
        answ += char(go[s[i] - '0'] + '0');
    }
    return stoi(answ);
}

string good(int x) {
    string ans = to_string(x);
    if (x < 10) {
        ans = "0" + ans;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, h, m, H, M;
    cin >> t;
    string s;
    while (t--) {
        cin >> h >> m;
        cin >> s;
        H = (s[0] - '0') * 10 + s[1] - '0';
        M = (s[3] - '0') * 10 + s[4] - '0';
        while (1) {
            if (M == m) {
                H++, M = 0;
            }
            if (H == h) {
                H = 0;
            }
            if (get(M) < h && get(H) < m) {
                cout << good(H) << ":" << good(M) << '\n';
                break;
            }
            M++;
        }
    }
    return 0;
}