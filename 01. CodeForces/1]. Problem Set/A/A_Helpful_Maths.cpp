#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    string s;
    cin >> s;

    int i = 0;
    int j = s.length();

    string one="";
    string two="";
    string three="";

    int c = 0;

    while (i<j)
    {
        if(s[i]=='1'){
            one = one + "1+";
            c++;
        }
        else if(s[i]=='2'){
            two = two + "2+";
        }
        else{
            three = three + "3+";
        }
        i += 2;
    }
    string ans = one + two + three;
    ans.pop_back();
    cout << ans;

    return 0;
}
