/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int n, box_width, w;
            cin >> n >> box_width;

            vector<int> counts(20);
            for (int i = 0; i < n; i++) {
                cin >> w;
                counts[log2(w)]++;
            }

            int height = 1, space_left = box_width;

            for (int idx = 0; idx < n; idx++) {
                int largest = -1;

                for (int size = 19; size >= 0; size--) {
                    if (counts[size] and (1 << size) <= space_left) {
                        largest = size;
                        break;
                    }
                }

                if (largest == -1) {
                    space_left = box_width;
                    height++;
                    for (int size = 19; size >= 0; size--) {
                        if (counts[size] and (1 << size) <= space_left) {
                            largest = size;
                            break;
                        }
                    }
                }

                counts[largest] -= 1;
                space_left -= 1 << largest;
            }

            cout << height << endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}