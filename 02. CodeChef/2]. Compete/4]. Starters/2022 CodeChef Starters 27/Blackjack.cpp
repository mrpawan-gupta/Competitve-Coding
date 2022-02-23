#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a, b;
    cin >> a >> b;
    
    int ans = 21 - (a + b);
    (ans <= 10) ? cout << ans << endl : cout << "-1" << endl;
    
    return 0;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}