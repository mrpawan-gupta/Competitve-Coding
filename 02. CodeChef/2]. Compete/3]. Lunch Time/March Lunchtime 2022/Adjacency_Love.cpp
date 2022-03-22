#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            long long n;
            cin >> n;
            vector<long long> odd;
            vector<long long> even;
            for (long long i = 0; i < n; i++){
                long long y;
                cin >> y;
                if (y & 1){
                    odd.push_back(y);
                }
                else{
                    even.push_back(y);
                }
            }
            if (odd.size() == n && (n & 1)){
                cout << -1 << endl;
            }
            else if (odd.size() == 1 && even.size() > 0){
                cout << -1 << endl;
            }
            else if (odd.size() == 1 && even.size() == 0){
                cout << odd[0] << endl;
            }
            else if (odd.size() >= 2){
                if (odd.size() & 1){
                    cout << odd[0] << " ";

                    for (long long i = 0; i < even.size(); i++){
                        cout << even[i] << " ";
                    }
                    for (long long i = 1; i < odd.size(); i++){
                        cout << odd[i] << " ";
                    }
                    cout << endl;
                }
                else {
                    for (long long i = 0; i < even.size(); i++){
                        cout << even[i] << " ";
                    }
                    for (long long i = 0; i < odd.size(); i++){
                        cout << odd[i] << " ";
                    }
                    cout << endl;
                }
            }
            else {
                cout << -1 << endl;
            }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ClassObject;
        ClassObject.solveTestCase();
    }

    return 0;
}