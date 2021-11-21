#include <iostream>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int r = 0;
        while (n != 0)
        {
            int x = n % 10;
            r = r * 10 + x;
            n = n / 10;
        }
        cout << r << endl;
    }
    return 0;
}