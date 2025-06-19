#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  vector<pair<int, int>> p;
  rep(i, n) p.emplace_back(a[i], 0);
  rep(i, m) p.emplace_back(b[i], 1);
  sort(p.begin(), p.end());
  rep(i, n + m - 1) {
    if (p[i].second == 0 && p[i + 1].second == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
