/*
     filename: D_Mark_and_Lightbulbs.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-07-20 22:53:46
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n; cin >> n;
            string s,t; cin >> s >> t;
            vector<long long> pos_s, pos_t;

            if(s[0] != t[0] || s[n-1] != t[n-1]){
                cout << -1 << "\n";
                return;
            }
            for(int i=0; i<n-1; i++){
                if(s[i] != s[i+1]) pos_s.push_back(i);
                if(t[i] != t[i+1]) pos_t.push_back(i);
            }
            if(pos_s.size() != pos_t.size()){
                cout << -1 << "\n";
            }
            else{
                int k = pos_s.size();
                long long ans = 0;
                for(int i=0; i<k; ++i){
                    ans += abs(pos_s[i] - pos_t[i]);
                }
                cout << ans << "\n";
            }
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