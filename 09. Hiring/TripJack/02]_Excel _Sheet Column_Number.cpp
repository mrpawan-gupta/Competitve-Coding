/*
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

TestCase -->
A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c : columnTitle){
            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    string s; cin >> s;

    while(t--){
        Solution ob;
        int ans = ob.titleToNumber(s);
        cout << ans << endl;
    }

    return 0;
}