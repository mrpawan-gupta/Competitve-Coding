#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        if(a+c>=n and b>=n){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }

    }

    return 0 ;
}