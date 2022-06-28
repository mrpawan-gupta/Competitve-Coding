/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n,k;
            cin>>n>>k;
            vector<int> p(n);
            for(int i=0;i<n;i++)cin>>p[i];
            long long s=p[0];
            long long ans=0;
            for(int i=1;i<n;i++){
                ans=max(ans,(100ll*p[i]+k-1)/k-s);
                s+=p[i];
            }
            cout<<ans<<'\n';
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int __test = 1;
    cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}