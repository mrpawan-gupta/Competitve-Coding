/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int N;
            cin >> N;
            vector<int> A(N);

            for (auto &a : A)
                cin >> a;

            vector<int> L(N);

            for (auto &l : L)
                cin >> l;

            vector<int> dp;

            for (int i = 0; i < N; i++)
                if (L[i] == 0)
                    dp.push_back(i);

            vector<int> order = dp;

            sort(order.begin(), order.end(), [&](int x, int y) {
                return A[x] > A[y];
            });

            vector<int> B = A;

            for (int i = 0; i < int(dp.size()); i++)
                B[dp[i]] = A[order[i]];

            for(auto i : B){
                cout << i << " ";
            }
            cout << endl;
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