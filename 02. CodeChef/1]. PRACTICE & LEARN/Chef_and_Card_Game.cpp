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

int sum(int n)
{
    int ans = 0;
    while (n)
    {
        ans += (n%10);
        n /= 10;
    }
    return ans;
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int c = 0, m = 0;
        while (n--){
            int a, b;
            cin >> a >> b;

            int x = sum(a);
            int y = sum(b);

            if (x == y){
                c++, m++;
            }
            else if (x > y) {
                c++;
            }
            else {
                m++;
            }
        }

        if (c > m){
            cout << "0 " << c << endl;
        }
        else if (c < m){
            cout << "1 " << m << endl;
        }
        else{
            cout << "2 " << c << endl;
        }
    }

    return 0;
}
