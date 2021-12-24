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
using mll = map<long long, long long>;
using umii = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
const ll mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define endl "" << endl
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestCases(){
    int n;
    cin >> n;

    string strA, strB;
    cin >> strA >> strB;
    if(strA==strB){
        cout << 0 << endl;
        return;
    }
    int cntA = 0;
    int cntB = 0;
    bool checkA = false;
    bool checkB = false;

    loop(i,0,n){
        if(strA[i]=='1'){
            checkA = true;
        }
        if(strB[i]='1'){
            checkB = true;
        }
        if(strA[i]!=strB[i]){
            cntA++;
        }
        else{
            cntB++;
        }

    }
    if (!cntA || !cntB) // if 1 is not present in either
    {
        if (strA == strB){
            cout << "0" << endl;
        }
        else{
            cout << "-1" << endl;
        }
        return;
    }

    if (n == 2)
    {
        if (strA == strB){
            cout << "0" << endl;
        }
        else{
            cout << "1" << endl;
        }
        return;
    }
    if (cntB % 2)
        cout << "-1" << endl;
    else{
        cout << min(cntB, cntA) << "" << endl;
    }
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        solveTestCases();
    }

    return 0;
}
