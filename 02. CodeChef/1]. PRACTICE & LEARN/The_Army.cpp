#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n, m;
            cin >> n >> m;

            vector<long> v;

            for (int i = 0; i < m; ++i){
                int id;
                cin >> id;
                v.push_back(id);
            }

            long minn = *min_element(v.begin(), v.end());
            long maxx = *max_element(v.begin(), v.end());

            for (int i = 0; i < n; i++){
                cout << max(abs(i - minn), abs(i - maxx)) << " ";
            }
            cout << endl;
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