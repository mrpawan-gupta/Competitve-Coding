#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vll = vector<long long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int m = s.size();
        int n = 0, numP = 0, p = 0, c = 0, numN = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'P'){
                if (i < m - 1 && s[i + 1] == 'P'){
                    c++;
                    i++;
                }
                else{
                    p++;
                }
            }
            else{
                if (i < m - 1 && s[i + 1] == 'P'){
                    numP++;
                    i++;
                }
                else if (i < m - 1 && s[i + 1] == 'N'){
                    numN++;
                    i++;
                }
                else{
                    n++;
                }
            }
        }
        int Size = s.size() / 3;
        if (numP >= Size){
            cout << numP - Size + 2 * numN + n << "\n";
        }
        else{
            int rem = Size - numP;
            if (numN >= rem){
                cout << rem + 2 * (numN - rem) + n << "\n";
            }
            else{
                int rr = rem - numN;
                if (c >= rr){
                    cout << rem + n << "\n";
                }
                else{
                    cout << numN + c + 2 * (rem - numN - c) << "\n";
                }
            }
        }
    }

    return 0;
}
