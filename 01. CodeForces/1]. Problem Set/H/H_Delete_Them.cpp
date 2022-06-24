/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

long long n, m, a[105];
string s[105];
set<long long>st;
map<long long, bool>mp;
 
bool isMatch(string s1, string s2){
    if (s1.size() != s2.size())return 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '?' || s2[i] == '?' || s1[i] == s2[i])continue;
        return 0;
    }
    return 1;
}

class Solution{
    public:
        void solve(){
            cin >> n >> m;
            for (int i = 1; i <= n; i++){
                cin >> s[i];
            }
            for (int i = 1; i <= m; i++){
                cin >> a[i];
                st.insert(s[a[i]].size());
                mp[a[i]] = 1;
            }
            string ans = "";
            if (st.size() == 1){
                for (int i = 0; i < *st.begin(); i++){
                    char ref = s[a[1]][i];
                    bool ok = 1;
                    for (int j = 2; j <= m; j++){
                        if (s[a[j]][i] != ref)ok = 0;
                    }
                    ok ? ans.push_back(ref) : ans.push_back('?');
                }  
                bool ok = 1;
                for (int i = 1; i <= n; i++){
                    if (mp[i] == 0 && isMatch(ans, s[i]))ok = 0;
                } 
                ok ? cout << "Yes\n" << ans : cout << "No";
            }
            else cout << "No";
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}