#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;

int main() {
  vector<int> a(9), b(8);
  rep(i, 9) cin >> a[i];
  rep(i, 8) cin >> b[i];
  int s = 0, t = 0;
  rep(i, 9) s += a[i];
  rep(i, 8) t += b[i];

  int ans = s + 1 - t;
  cout << ans << endl;

  return 0;
}
