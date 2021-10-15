#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y) {
     if( y == 0) {
         return x;
     }
    return GCD(y, x%y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; cin >> t;
    while (t--){

        int a, b, val; cin >> a >> b;
        val = __gcd(a, b);
        while (val != 1) {
            a /= val;
            val = __gcd(a, b); 
        }
        if(a==1) cout << "YES" <<"\n";
        else cout << "NO" <<"\n";
    
    }
    return 0;
}