#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            long long n, m, Q, x, y;
            cin >> n >> m >> Q;

            vector<long long> v[200005];

            while (m--) {
                cin >> x >> y;
                v[x].push_back(y);
                v[y].push_back(x);
            }
            map<long long, long long> mp;
            queue<long long> q;
            while (Q--){
                cin >> x >> y;
                if (x == 3){
                    if (mp[y] == 1){
                        cout << "YES" << endl;
                    } else{
                        cout << "NO" << endl;
                    }
                }
                else if (x == 1){
                    if (mp[y] == 0){
                        q.push(y);
                    }
                    mp[y] = 1;
                }
                else{
                    for (int i = 0; i < y && !q.empty(); i++){
                        int k = q.size();
                        while (k--) {
                            long long u = q.front();
                            q.pop();
                            for (auto x : v[u]) {
                                if (mp[x] == 0){
                                    mp[x] = 1;
                                    q.push(x);
                                }
                            }
                        }
                    }
                }
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