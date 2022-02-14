#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int sum = (n * (n + 1)) / 2;

        if(sum % 2){
            cout << n - 1 << endl;
        } else{
            cout << n << endl;
        }
    }

    return 0 ;
}