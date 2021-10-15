#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;

        map<int, int> a;
        map<int, int> b;

        for(int i = 0; i < n; i++)
        {
            a[i-(str[i]-48)]++;
            b[i+(str[i]-48)]++;
            
            }

            int ans = 0;

            for(auto itr = a.begin(); itr != a.end(); itr++)
            {
                ans += ((itr->second) * (itr->second-1)) / 2;
            }
            for(auto itr = b.begin(); itr != b.end(); itr++)
            {
                ans += ((itr->second) * (itr->second-1)) / 2;
            }

            cout<<ans<<endl;
    }
    return 0;
}