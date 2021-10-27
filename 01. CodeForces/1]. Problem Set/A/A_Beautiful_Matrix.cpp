#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int a[6][6];
    int row , col;

    for (int i = 1; i < 6; i++){
        for (int j = 1; j < 6; j++){
            cin >> a[i][j];

            if(a[i][j]==1){
                row = abs(3-i);
                col = abs(3 - j);
                cout << row + col << endl;
            }
        }
    }
        return 0;
}
