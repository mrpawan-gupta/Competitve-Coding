/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void solve() {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());

        int ans = 0;
        for (int i = 0; i < n; i++){
            int min_ele = min(v[i].first, v[i].second);
            if (ans <= min_ele) {
                ans = min_ele;
            }
            else {
                ans = max(v[i].first, v[i].second);
            }
        }
        cout << ans << endl;
    }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin.failbit;
    cin.badbit;

    int t = 1;
    // cin >> t;

    while (t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}