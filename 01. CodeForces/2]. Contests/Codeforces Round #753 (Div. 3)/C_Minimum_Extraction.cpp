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

    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);

        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());

        ll min = *min_element(v.begin(),v.end());

        ll idx = min;
        

        while(v.size()>1)
        {
                ll temp = v[v.size()-2];

                temp-=idx;

                min = max(min,temp);

                idx += temp;
                v.pop_back();
        }

        cout<<min<<"\n";
    }

    return 0;
}
