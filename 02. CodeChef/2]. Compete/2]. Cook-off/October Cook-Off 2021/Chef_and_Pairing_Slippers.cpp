#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    cin>>t;
    while(t--){
        int n,l,k;
        cin>>n>>l>>k;
        int check = n-l;
        if(check>l){
            int c = l*k;
            cout<<c<<endl;
        }
        else{
            int c = check*k;
            cout<<c<<endl;
        }
        
    }

    return 0;
}
