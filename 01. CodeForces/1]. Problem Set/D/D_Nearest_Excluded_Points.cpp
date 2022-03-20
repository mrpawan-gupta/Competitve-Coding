#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

class Solution{
    public:
        void solveTestCase(){
            int n;
            scanf("%d", &n);
            vector<pair<int, int>> a(n);
            for (auto &[x, y] : a)
                scanf("%d %d", &x, &y);

            set<pair<int, int>> st(a.begin(), a.end());
            map<pair<int, int>, pair<int, int>> ans;
            queue<pair<int, int>> q;
            for (auto [x, y] : a)
            {
                for (int i = 0; i < 4; ++i)
                {
                    int nx = x + dx[i], ny = y + dy[i];
                    if (st.count({nx, ny}))
                    {
                        continue;
                    }
                    ans[{x, y}] = {nx, ny};
                    q.push({x, y});
                    break;
                }
            }

            while (!q.empty())
            {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for (int i = 0; i < 4; ++i)
                {
                    int nx = x + dx[i], ny = y + dy[i];
                    if (!st.count({nx, ny}) || ans.count({nx, ny}))
                    {
                        continue;
                    }
                    ans[{nx, ny}] = ans[{x, y}];
                    q.push({nx, ny});
                }
            }

            for (auto [x, y] : a)
            {
                auto it = ans[{x, y}];
                printf("%d %d\n", it.first, it.second);
            }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ClassObject;
        ClassObject.solveTestCase();
    }

    return 0;
}