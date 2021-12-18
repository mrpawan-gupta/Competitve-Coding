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
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using mii = map<int, int>;
using umii = unordered_map<int, int>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        long long int w, h;
        cin >> w >> h;

        long long int solve = LONG_LONG_MIN;

        for (auto i = 0; i < 4; i++){

            // array size;
            long long int check;
            cin >> check;

            // input array
            vl arrCheck(check);

            for (auto j = 0; j < check; j++){
                cin  >> arrCheck[j];
            }

            // finding max base * height
            if(i==0 || i==1){
                // max Height
                long long int mxH = arrCheck[check - 1] - arrCheck[0];
                mxH *= h;
                solve = max(solve, mxH);
            }
            else{
                // max weidth
                long long int mxW = arrCheck[check - 1] - arrCheck[0];
                mxW *= w;

                solve = max(solve, mxW);
            }
        }
        cout << solve << endl;
    }
    return 0;
}
