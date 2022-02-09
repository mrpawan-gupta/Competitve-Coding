#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int x, y;
        cin >> x >> y;
        int b = x / 2;

        if (y >= b){
            cout << b << endl;
        }
        else{
            cout << y << endl;
        }
    }

    return 0 ;
}