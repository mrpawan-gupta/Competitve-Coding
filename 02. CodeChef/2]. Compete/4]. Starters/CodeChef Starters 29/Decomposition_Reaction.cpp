#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007

class Solution{
    public:
        void solveTestCase(){
            long n, m;
            cin >> n >> m;
            vector<long> A(n);
            for (int i = 0; i < n; i++)
                cin >> A[i];
            while (m--){
                long c, x;
                cin >> c >> x;
                vector<long> u(2 * x);
                for (int i = 0; i < 2 * x; i++)
                    cin >> u[i];
                long cnt = A[c - 1];
                A[c - 1] = 0;
                for (int i = 0; i < u.size() - 1; i += 2){
                    A[u[i + 1] - 1] = (A[u[i + 1] - 1] + cnt * u[i]) % INF;
                }
            }
            for (auto x : A){
                cout << x << "\n";
            }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ClassObject;
        ClassObject.solveTestCase();
    }

    return 0;
}