#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int x;
            cin >> x;

            cout << 100 - x << endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        Solution obj;
        obj.solve();
    }

    return 0;
}