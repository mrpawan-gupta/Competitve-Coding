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

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int flag = 0;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[i - 1])
                count++;
            else
            {
                if (count > k)
                {
                    flag = 1;
                    break;
                }
                else
                    count = 1;
            }
        }
        if (count > k)
            flag = 1;
        if (flag == 1)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> ans;

        for (int i = 0; i < k; i++){
            ans.push_back(arr[i]);
        }
        vector<vector<int>> vec(k);

        int x = k - 1;

        for (int i = k; i < n; i++)
        {

            if (arr[i] == arr[k - 1] && i == k)
            {
                int ind = lower_bound(ans.begin(), ans.end(), arr[i]) - ans.begin();
                for (int j = ind - 1; j >= 0; j--){
                    vec[j].push_back(arr[k]);
                    i++;
                    if (arr[i] != arr[k]){
                        i--;
                        break;
                    }
                }
                continue;
            }
            if (arr[i] != arr[i - 1]){
                x = k - 1;
                vec[x].push_back(arr[i]);
            }
            else{
                x--;
                vec[x].push_back(arr[i]);
            }
        }
        for (int i = 0; i < k; i++)
        {
            int sif = vec[i].size();
            for (int j = sif - 1; j >= 0; j--){
                cout << vec[i][j] << " ";
            }
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
