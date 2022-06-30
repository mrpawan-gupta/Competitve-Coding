/*
     filename: Even_Equal_Odd.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-29 20:38:53
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n;
            cin >> n;
            n *= 2;
            int __count = 0;
            int __a[200001];
            vector<int> ___dp;
            for(int i=1; i<=n; ++i) {
                cin >> __a[i];
                if(__a[i]%2!=0)
                    __count++;
                else {
                    int __temp = 0;
                    while(__a[i]%2==0) {
                        __a[i]/=2;
                        __temp++;
                    }
                    ___dp.push_back(__temp);
                }
            }
            sort(___dp.begin(),___dp.end());
            if(__count>n/2){
                 cout << __count-n/2 << endl;
            }
            else {
                int ___sum = 0;
                for(int i=__count;i<n/2;++i)
                    ___sum += ___dp[i-__count];
                cout << ___sum << endl;
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