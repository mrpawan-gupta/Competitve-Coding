#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    assert(1 <= t && t <= 10);
    while(t--){
        int n, m;
        cin >> n >> m;
        assert(1 <= n && n <= 1e5);
        assert(1 <= m && m <= 1e5);
        vector<int> a(n + 1), b(m + 1);
        int i;
        for(i = 1; i <= n ; i++)
        {
            cin >> a[i];
            assert(1 <= a[i] && a[i] <= 1e6);
        }
        for(i = 1; i <= m ; i++)
        {
            cin >> b[i];
            assert(1 <= b[i] && b[i] <= 1e6);
        }
        vector<int> c(n + 1), d(m + 1);
        for(i = 1 ; i <= n; i++)
            c[i] = i*a[i]%mod;
        for(i = 1 ; i <= m ; i++)
            d[i] = i*b[i]%mod;
        // F(A, B) = C*B + A*D
        int suma = 0, sumb = 0, sumc = 0, sumd = 0;
        for(i = 1 ; i <= n; i++)
            suma += a[i], sumc += c[i], suma %= mod, sumc %= mod;
        for(i = 1 ; i <= m; i++)
            sumb += b[i], sumd += d[i], sumb %= mod, sumd %= mod;
        cout << (sumc*sumb%mod + suma*sumd%mod)%mod;
        int q;
        cin >> q;
        assert(1 <= q && q <= 1e5);
        for(i = 1 ; i <= q ; i++){
            int tp, u, v;
            cin >> tp >> u >> v;
            assert(1 <= tp && tp <= 3);
            if(tp == 1){
                assert(1 <= u && u <= n);
                assert(1 <= v && v <= m);
                suma -= a[u];
                sumb -= b[v];
                sumc -= c[u];
                sumd -= d[v];
                int temp = a[u];
                a[u] = b[v];
                b[v] = temp;
                c[u] = u*a[u]%mod;
                d[v] = v*b[v]%mod;
                suma = (suma + a[u])%mod;
                sumb = (sumb + b[v])%mod;
                sumc = (sumc + c[u])%mod;
                sumd = (sumd + d[v])%mod;
                
            }
            else if(tp == 2){
                assert(1 <= u && u <= n);
                assert(1 <= v && v <= n);
                sumc -= c[u];
                sumc -= c[v];
                
                int temp = a[u];
                a[u] = a[v];
                a[v] = temp;
                c[u] = u*a[u]%mod;
                c[v] = v*a[v]%mod;
                
                sumc = (sumc + c[u])%mod;
                sumc = (sumc + c[v])%mod;
            }
            else{
                assert(1 <= u && u <= m);
                assert(1 <= v && v <= m);
                sumd -= d[u];
                sumd -= d[v];
                
                int temp = b[u];
                b[u] = b[v];
                b[v] = temp;
                d[u] = u*b[u]%mod;
                d[v] = v*b[v]%mod;
                
                sumd = (sumd + d[u])%mod;
                sumd = (sumd + d[v])%mod;
            }
            cout << " " << ((sumc*sumb%mod + suma*sumd%mod)%mod + mod)%mod; 
        }
        cout << '\n';
    }
}