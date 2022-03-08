#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int N, C;
            std::cin >> N >> C;
            C += 5;
            int arr[N];
            for (auto &x : arr){
                std::cin >> x;
            }
            std::map<int, int> mp;
            for (auto &x : arr){
                mp[x]++;
            }
            if (!mp[1]){
                cout << "No" << endl;
                return;
            }
            long long pref[C] = {};
            for (auto &x : mp){
                pref[x.first]++;
            }
            int s = 0;
            for (int i = 0; i != C; ++i){
                s += pref[i];
                pref[i] = s;
            }
            for (auto &x : mp){
                int a = x.first;
                int b = a * 2;
                int sec = 2;
                while (b < C){
                    int valores = pref[std::min(C - 1, b + a - 1)];
                    valores -= pref[b - 1];
                    if (valores){
                        if (!mp[sec]){
                            cout << "No" << endl;
                            return;
                        }
                    }
                    b += a;
                    ++sec;
                }
            }
            cout << "Yes" << endl;
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