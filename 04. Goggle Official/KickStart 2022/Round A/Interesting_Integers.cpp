#include <bits/stdc++.h>
using namespace std;

bool isDivisible(long long int num){

    long long int check = num;

    long long int sum_digits = 0, product_digits = 1;
    while (num){
        int last_digit = num % 10;
        sum_digits += last_digit;
        product_digits *= last_digit;
        num /= 10;
    }
    num = check;
    if (product_digits % sum_digits == 0){
        return true;
    }else{
        return false;
    }
}

class Solution{
    public:
        void solveTestCase(){
            static int Tc = 1;
            long long int n, m, count = 0;
            cin >> n >> m;
            for (long long int i = n; i <= m; i++){
                if (isDivisible(i))
                    count++;
            }
            cout << "Case #" << Tc << ": " << count << endl;
            Tc++;
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


