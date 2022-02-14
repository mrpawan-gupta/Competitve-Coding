#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--){
        long d;
        cin >> d;

        long l, r;
        cin >> l >> r;

        if (d >= l and d <= r){
            cout << "Take second dose now" << endl;
        } else if(d>r){
            cout << "Too Late" << endl;
        } else{
            cout << "Too Early" << endl;
        }
    }

    return 0;
}