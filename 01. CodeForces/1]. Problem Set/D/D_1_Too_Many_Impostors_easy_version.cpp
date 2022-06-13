/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int N; 
             cin >> N;
             int res[N];
             for(int i=0; i<N; i++) {
                 cout << "? " << i + 1 << " " << (i+1) % N + 1 << " " << (i+2) % N + 1 << endl;
                 cin >> res[i];
             }
             vector<int> imp;
             for(int i=0; i<N; i++) {
                 if(res[i] != res[(i+1) % N]) {
                     if(res[i] == 0) imp.push_back(i + 1);
                     else imp.push_back((i+3) % N + 1);
                     for(int j=0; j<N; j++) {
                         if(j != i && j != (i+3) % N) {
                             cout << "? " << i + 1 << " " << (i+3) % N + 1 << " " << j + 1 << endl;
                             int r;
                             cin >> r;
                             if(r == 0) imp.push_back(j + 1);
                         }
                     }
                     break;
                 }
             }
             cout << "! " << imp.size();
             for(int x : imp) cout << " " << x;
             cout << endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}