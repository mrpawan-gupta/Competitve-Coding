#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n, x;
            cin >> n >> x;

            vector<int> v(n);

            for (int i = 0; i < n; i++){
                cin >> v[i];
            }

            int ans = -1;
            for(int i=0; i<n; i++){
                if(v[i]<x){
                    ans = i;
                }
            }

            cout << ans+1 << endl;
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