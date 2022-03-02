#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n;
            cin >> n;

            vector<long> arr(n);
            vector<long> sum(n);
            long x = 0;
            for (int i = 0; i < n; i++){
                cin >> arr[i];
                x = x + arr[i];
                sum[i] = x;
            }

            long ans = x;
            for (int i = 0; i < n; i++){
                long maxi = max(sum[i], x - sum[i]);
                ans = min(maxi, ans);
            }

            cout << ans << endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        Solution is_object;
        is_object.solveTestCase();
    }

    return 0;
}