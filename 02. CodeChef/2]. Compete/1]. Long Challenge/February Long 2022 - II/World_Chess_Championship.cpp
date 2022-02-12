#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x, i;
        cin >> x;
        int d = 0, n = 0, c = 0;
        char a[14];
        for (i = 0; i < 14; i++){
            cin >> a[i];
            switch (a[i]){
            case 'C':
                c += 2;
                break;
            case 'N':
                n += 2;
                break;
            case 'D':
                c += 1;
                n += 1;
                break;
            }
        }
        (c > n) ? cout << 60 * x : ((c != n) ? cout << 40 * x : cout << 55 * x);

        cout << "\n";
    }
    return 0;
}