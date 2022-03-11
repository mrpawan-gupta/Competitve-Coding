#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vvl = std::vector<vector<long long>>;

#define pb push_back
#define pp pop_back
#define mp make_pair
#define eb emplace_back
#define Fi first
#define Si second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sum(x) accumulate(all(x), 0LL)
#define endl "\n"

constexpr long long mod = 1e9 + 7, inf = 1e18;
constexpr int Mod_N = 10e5 + 5; 
constexpr long double Eps = 1e-9;
#define PI 3.1415926535897932384626433832795l

long long LCM(long long a, long long b){
    return ((long long)a * b) / __gcd(a, b);
}

class Solution{
    public:
        void solveTestCase(){
            ll n, m;
            cin >> n >> m;
            char Disc[n][m];
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    cin >> Disc[i][j];
                }
            }
            if (Disc[0][0] == '1'){
                cout << -1 << endl;
                return;
            }

            vvl Check;
            for (int i = n - 1; i >= 0; i--){
                for (int j = m - 1; j >= 0; j--){
                    if (Disc[i][j] == '1'){
                        if (j == 0){
                            Check.pb({i, j + 1, i + 1, j + 1});
                        }
                        else{
                            Check.pb({i + 1, j, i + 1, j + 1});
                        }
                    }
                }
            }
            cout << Check.size() << endl;
            for (auto row : Check){
                for (auto col : row){
                    cout << col << " ";
                }
                cout << endl;
            }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ClassObject;
        ClassObject.solveTestCase();
    }

    return 0;
}