#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int s, a, b;
        cin >> s >> a >> b;

        int c;
        cin >> c;

        if(100*b>=s*(100+c) and s*(100+c)>=100*a){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }

    return 0 ;
}