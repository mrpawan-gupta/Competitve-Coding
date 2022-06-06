#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

int mod = 1e9 + 7;

int fast_pow(int a, int p) {
  int res = 1;
  while (p) {
    if (p % 2 == 0) {
      a = a * 1ll * a % mod;
      p /= 2;
    } else {
      res = res * 1ll * a % mod;
      p--;
    }
  }
  return res;
}

int fact(int n) {
  int res = 1;
  for (int i = 1; i <= n; i++) {
    res = res * 1ll * i % mod;
  }
  return res;
}

int C(int n, int k) {
  return fact(n) * 1ll * fast_pow(fact(k), mod - 2) % mod * 1ll * fast_pow(fact(n - k), mod - 2) % mod;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> cnt(n + 1);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    cnt[x]++;
  }
  for (int i = n; i >= 0; i--) {
    if (cnt[i] >= k) {
      cout << C(cnt[i], k) << "\n";
      return;
    } else {
      k -= cnt[i];
    }
  }
  cout << 1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}