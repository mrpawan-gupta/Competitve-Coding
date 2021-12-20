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
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestcases(){

    //input Nuber A an B;
    string Num1, Num2;
    cin >> Num1 >> Num2;

    ll lengthNum1 = (ll)Num1.length();
    ll lengthNum2 = (ll)Num2.length();

    ll intialIndex1 = lengthNum1 - 1;
    ll InitialIndex2 = lengthNum2 - 1;

    // answer string
    string Sol;

    // it result is true
    bool isOk = true;

    while (intialIndex1 >= 0 and InitialIndex2 >= 0){
        ll valueNum1 = Num1[intialIndex1] - '0';
        ll valueNum2 = Num2[InitialIndex2] - '0';
        if (valueNum1 <= valueNum2){
            ll diff = valueNum2 - valueNum1;
            Sol.pb((char)('0' + diff));
            intialIndex1--, InitialIndex2--;
        }
        else{
            InitialIndex2--;
            valueNum2 += (10 * ((ll)(Num2[InitialIndex2] - '0')));
            ll diff = valueNum2 - valueNum1;
            if (diff > 9 or diff < 0)
            {
                isOk = false;
                break;
            }
            Sol.pb((char)('0' + diff));
            intialIndex1--, InitialIndex2--;
        }
    }

    if (!isOk){
        cout << -1 << endl;
       return;
    }

    if (intialIndex1 >= 0){
        isOk = false;
    }

    if (!isOk){
        cout << -1 << endl;
       return;
    }

    while (InitialIndex2 >= 0){
        Sol.pb(Num2[InitialIndex2--]);
    }

    while (Sol.back() == '0'){
        Sol.pp();
    }

    // reverse string
    reverse(Sol.begin(), Sol.end());

    // print answer
    cout << Sol << endl;
}
int main(){
    fast;

    // no of testcase
    int t;
    cin >> t;
    while(t--){
        solveTestcases();
    }

    return 0;
}
