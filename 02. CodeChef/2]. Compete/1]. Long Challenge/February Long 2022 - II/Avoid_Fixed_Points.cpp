#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){

        int n, i, x, cnt = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++){
            cin >> a[i];
            x = 1 + cnt + i;
            (x == a[i] ? cnt++ : 0);
        }
        cout << cnt << endl;

    }
    return 0;
}