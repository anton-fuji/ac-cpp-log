#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;

int main() {
  vector<ll> a(9), b(8);
  rep(i, 9) cin >> a[i];
  rep(i, 8) cin >> b[i];

  int t_sum = 0;
  rep(i, 9) { t_sum += a[i]; }

  int a_sum = 0;
  rep(i, 8) { a_sum += b[i]; }

  int ans = t_sum - a_sum + 1;
  cout << ans << endl;

  return 0;
}
