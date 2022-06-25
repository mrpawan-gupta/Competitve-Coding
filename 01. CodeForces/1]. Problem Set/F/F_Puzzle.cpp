/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            long long n, c = 0, t = 0, a = 0, v, i; cin>>n;
            int u[n], d[n];
            for(int &p: u) cin>>p;
            for(int &p: d) cin>>p;
            for(int& p : u) {
                int a; cin >> a;
                p-=a;
            }
            for(int& p : d) {
                int a; cin >> a;
                p-=a;
            }
            for(i=0; i<n; i++){
                c += u[i], t += d[i];
                if(c*t<0){
                    a += v = min(abs(c), abs(t));
                    if(c>0) v = -v;
                    c += v, t -= v;
                }
                a += abs(c + t);
            }
            if(c!=0 or t!=0) {
                cout << "-1\n";
            }
            else cout<<a;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}