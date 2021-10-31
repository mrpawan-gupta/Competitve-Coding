#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        ll size=pow(2,n);
        for(int i=0;i<size;i++){
            int x;
            cin >> x;
            v.pb(x);
        }
        int Min_element = *min_element(v.begin(), v.end());
        int Max_element = *max_element(v.begin(), v.end());
        if(Max_element-Min_element <= 1){
            cout << "YES"<< '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}
