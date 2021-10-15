#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        char temp='1';
        long long count=0;
        for(auto i=s.begin(); i!=s.end(); i++)
        {
            if((*i)!=temp)
            {
                count++;
                temp=(*i);
            }
        }
        cout<<count<<endl;
    }

    return 0;
}