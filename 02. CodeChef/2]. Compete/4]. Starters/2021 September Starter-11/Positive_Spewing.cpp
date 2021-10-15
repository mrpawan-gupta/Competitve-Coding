#include <bits/stdc++.h>
using namespace std;

const long long mod       = 1000000007;
const long long mod2      = 998244353;



int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        long long n, k;
        cin >> n >> k;

        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool all_zero = true;
        for(auto x: arr){
            if(x > 0){
                all_zero = false;
                break;
            }
        }

        if(all_zero){
            cout << 0 << endl;
            continue;
        }

        if(k == 0){
            long long ans = 0;
            for(auto x: arr){
                ans += x;
            }
            cout << ans << endl;
            continue;
        }

        set<long long> pos;
        set<long long, greater<long long>> posG;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                pos.insert(i);
                posG.insert(i);
                pos.insert(i+n);
                posG.insert(i+n);
            }
        }

        vector<long long>ans_arr(n, k);

        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                long long val1 = *pos.lower_bound(i);
                long long val2 = *posG.lower_bound(i+n);
                long long dist = min(abs(val1 - i), abs(val2 - (i+n)));
                ans_arr[i] -= dist;
            }
        }

        for(auto &x: ans_arr){
            if(x < 0){
                x = 0;
            }
        }


        long long sum = 0;
        for(auto x: arr){
            sum += x;
        }

        for(auto x: ans_arr){
            sum += 2LL*x;
        }

        cout << sum << endl;
    }

    return 0;
}
