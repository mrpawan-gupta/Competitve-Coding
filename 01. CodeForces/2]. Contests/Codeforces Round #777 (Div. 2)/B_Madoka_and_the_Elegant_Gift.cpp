#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vvl = std::vector<vector<long long>>;

#define LoopN(a, b, c) for (long long a = b; a < c; ++a)

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

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            ll n, m;
            cin >> n >> m;
            char charArray[n][m];
            LoopN(i, 0, n){
                LoopN(j, 0, m){
                    cin >> charArray[i][j];
                }
            }
            bool isOK = 0;
            LoopN(i, 0, n){
                LoopN(j, 0, m){
                    if (charArray[i][j] == '1') {
                        if (i + 1 < n && charArray[i + 1][j] == '1' && j + 1 < m && charArray[i][j + 1] == '1' && charArray[i + 1][j + 1] == '0'){
                            isOK = 1;
                        }
                        if (i + 1 < n && charArray[i + 1][j] == '1' && j - 1 >= 0 && charArray[i][j - 1] == '1' && charArray[i + 1][j - 1] == '0'){
                            isOK = 1;
                        }
                        if (i - 1 >= 0 && charArray[i - 1][j] == '1' && j + 1 < m && charArray[i][j + 1] == '1' && charArray[i - 1][j + 1] == '0'){
                            isOK = 1;
                        }
                        if (i - 1 >= 0 && charArray[i - 1][j] == '1' && j - 1 >= 0 && charArray[i][j - 1] == '1' && charArray[i - 1][j - 1] == '0') {
                            isOK = 1;
                        }
                    }
                }
            }
            if (isOK){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ClassObject;
        ClassObject.solveTestCase();
    }

    return 0;
}
