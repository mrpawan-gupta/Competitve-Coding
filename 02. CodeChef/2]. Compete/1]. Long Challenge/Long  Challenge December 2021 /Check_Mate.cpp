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

    while (t--){
        int xk, yk, x1, y1, x2, y2;
        cin >> xk >> yk >> x1 >> y1 >> x2 >> y2;

        string a = "NO";
        if (!(xk == 1 || xk == 8 || yk == 1 || yk == 8)){
            a = "NO";
        }
        else{
            if (xk == 1){
                if ((x1 == 2 || x2 == 2) && y1 != y2)
                {
                    if (abs(y1 - yk) > 1 && abs(y2 - yk) > 1)
                    {
                        a = "YES";
                    }
                }
            }
            else if (xk==8){
                if((x1==7 || x2==7)&& y1!=y2){
                    if(abs(y1-yk)>1 && abs(y2-yk)>1){
                        a = "YES";
                    }
                }
            }

            if(yk==1){
                if((y1==2 || y2==2)&& x1!=x2){
                    if(abs(x1-xk)>1 && abs(x2-xk)>1){
                        a = "YES";
                    }
                }
            }
            else if(yk==8){
                if ((y1 == 7 || y2 == 7) && x1 != x2)
                {
                    if (abs(x1 - xk) > 1 && abs(x2 - xk) > 1)
                    {
                        a = "YES";
                    }
                }
            }
        }
        cout << a << '\n';
    }

    return 0;
}
