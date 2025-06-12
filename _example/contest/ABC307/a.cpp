#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n * 7);

  rep(i, n * 7) cin >> a[i];

  vector<ll> ans(n);
  rep(i, n) {
    for (int j = i * 7; j < (i + 1) * 7; j++) {
      ans[i] += a[j];
    }
  }

  rep(i, n) { cout << ans[i] << (i == n - 1 ? "\n" : " "); }
  return 0;
}
