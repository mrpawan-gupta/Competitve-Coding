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

    int t;
    cin >> t;
    while(t--){

        string str1;
        cin >> str1;

        string str2;
        cin >> str2;

        unordered_map<char,int>idx;

        for(int i = 0 ; i < str1.size() ; i++) {
            idx[str1[i]]=i;
        }

        int Ans=0;

        for(int i = 0 ; i < str2.size()-1 ; i++) {
            Ans += abs(idx[str2[i]]-idx[str2[i+1]]);
        }
        cout << Ans << '\n';
    }
    return 0;
}
