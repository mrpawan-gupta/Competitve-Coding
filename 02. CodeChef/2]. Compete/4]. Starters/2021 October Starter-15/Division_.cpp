#include <bits/stdc++.h>
using namespace std;
int cal(int no, int a, int b)
{
    int k;
    if (a >= 0 and b <= 0 or a <= 0 and b >= 0)
    {
        int e = 0;
        for (int i = 2; i <= no; i++)
        {
            if (no % i == 0 and i % 2 == 0)
            {
                e = i;
            }
        }
        int o = 0;
        for (int i = 2; i <= no; i++)
        {
            if (no % i == 0 and i % 2 != 0)
            {
                o = i;
            }
        }
        if (e != 0 and o != 0)
        {
            if (a > 0 and b < 0)
                return e;
            if (b > 0 and a > 0)
                return o;
        }
        return e == 0 ? o : e;
    }
    else
    {
        for (int i = 2; i <= no; i++)
        {
            if (no % i == 0)
            {
                k = i;
                break;
            }
        }
    }
    //cout<<k<<endl;
    return k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        long int n, a, b;
        cin >> n >> a >> b;
        int point = 0;
        while (n != 1)
        {

            int x = cal(n, a, b);
            n /= x;
            if (x % 2 == 0)
                point += a;
            else
                point += b;
        }

        cout << point << endl;
    }

    return 0;
}