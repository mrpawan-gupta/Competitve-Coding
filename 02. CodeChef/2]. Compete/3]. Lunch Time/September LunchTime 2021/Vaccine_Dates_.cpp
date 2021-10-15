#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int d,l,r;
        cin>>d>>l>>r;
        if(d >= l and d <= r)
        {
            cout<<"Take second dose now"<<endl;
        }
        else if(d > l)
        {
            cout<<"Too Late"<<endl;
        }
        else cout<<"Too Early"<<endl;
    }
    return 0;
}