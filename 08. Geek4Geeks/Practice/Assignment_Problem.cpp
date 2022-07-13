#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int assignmentProblem(int Arr[], int n){
        vector<vector<int>> price(n, vector<int>(n));
        vector<int> dp(n);
        int idx = 0, ans = 1e9;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++){
                price[i][j] = Arr[idx];
                idx++;
            }
            dp[i] = i;
        }
        do{
            int temp = 0;
            for (int i = 0; i < n; i++){
                temp += (price[dp[i]][i]);
            }
            ans = min(ans, temp);
        } while (next_permutation(dp.begin(), dp.end()));

        return ans;
    }
};
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        int Arr[n * n];
        for (int i = 0; i < n * n; i++)
            cin >> Arr[i];

        Solution ob;
        cout << ob.assignmentProblem(Arr, n) << endl;
    }
    return 0;
}