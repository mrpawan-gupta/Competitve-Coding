#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int u, v, a, s;
        cin >> u >> v >> a >> s;

        long cnt = v * v;
        long check = (u * u) - 2 * a * s;

        if(cnt>=check){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0 ;
}