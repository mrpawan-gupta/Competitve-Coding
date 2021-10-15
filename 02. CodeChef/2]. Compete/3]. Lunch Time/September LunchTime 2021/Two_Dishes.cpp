#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int cnt = 0;
        cnt += min(x, y);
        y -= min(x, y);
        if (y <= 0)
        {
            if (cnt >= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cnt += min(y, z);
            if (cnt >= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
