#include <iostream>
#include <map>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> c(n), d(m + 1);
  vector<int> p(m + 1);

  rep(i, n) cin >> c[i];
  rep(i, m) cin >> d[i + 1];
  rep(i, m + 1) cin >> p[i];
  map<string, int> mp;
  rep(i, m) mp[d[i + 1]] = p[i + 1];
  int ans = 0;
  rep(i, n) {
    int price = mp[c[i]];
    if (price == 0)
      price = p[0];
    ans += price;
  }
  cout << ans << endl;
  return 0;
}
