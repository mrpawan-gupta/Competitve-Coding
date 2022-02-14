#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int w1, w2;
        cin >> w1 >> w2;

        int x1, x2;
        cin >> x1 >> x2;

        int m;
        cin >> m;

        int min = w1 + (x1 * m);
        int max = w1 + (x2 * m);

        if(min<=w2 and w2<=max){
            cout << 1 << endl;
        } else{
            cout << 0 << endl;
        }

    }

    return 0 ;
}