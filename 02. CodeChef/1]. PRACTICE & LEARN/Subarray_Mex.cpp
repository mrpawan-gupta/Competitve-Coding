#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int n, k, x;
            cin >> n >> k >> x;

            if (x > k){
                cout << -1 << endl;
                return;
            }

            int curr = 0;
            int arr[n];
            for (int i = 0; i < k; i++){
                if (i == x)
                    curr++;
                arr[i] = curr;
                curr++;
            }

            for (int i = k; i < n; i++){
                arr[i] = arr[i - k];
            }
            for (int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
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