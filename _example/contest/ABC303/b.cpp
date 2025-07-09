#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector a(m, vector<int>(n));
  rep(i, m) rep(j, n) cin >> a[i][j];

  vector g(n, vector<int>(n));
  rep(i, m) {
    rep(j, n - 1) { g[a[i][j]][a[i][j + 1]] = true; }
  }

  int ans = 0;
  rep(x, n) rep(y, x) {
    if (g[x][y] || g[y][x])
      continue;
    ans++;
  }
  cout << ans << endl;
  return 0;
