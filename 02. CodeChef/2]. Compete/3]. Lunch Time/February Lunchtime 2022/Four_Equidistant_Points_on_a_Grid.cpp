#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solveTestCase()
    {
        int d;
        cin >> d;
        if (d % 2){
            cout << -1 << endl;
            return;
        }

        cout << "0 " << d / 2 << endl;
        cout << d / 2 << " 0" << endl;
        cout << d / 2 << ' ' << d << endl;
        cout << d << ' ' << d / 2 << endl;
    }
};

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        Solution is_object;
        is_object.solveTestCase();
    }

    return 0;
}