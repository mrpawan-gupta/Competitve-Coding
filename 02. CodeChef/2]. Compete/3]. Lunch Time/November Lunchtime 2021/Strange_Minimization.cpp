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

bool isPrime(ll n){
    if (n <= 1){
        return false;
    }
    if (n <= 3){
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for (ll i = 5; i * i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

ll smallestDivisor(ll n){
    if (n % 2 == 0){
        return 2;
    }
    for (ll i = 3; i * i <= n; i += 2){
        if (n % i == 0){
            return i;
        }
    }

    return n;
}

void psi(int T)
{
    ll n;
    cin >> n;

    if (isPrime(n))
        cout << n + 1 << '\n';

    else
    {
        ll k = smallestDivisor(n);

        cout << (k + 1) * (n / k) << '\n';
    }
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){

        psi(t);
    }

    return 0;
}
