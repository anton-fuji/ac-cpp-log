#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  rep(i, m) cin >> a[i];
  vector<vector<int>> x(n, vector<int>(m));
  rep(i, n) rep(j, m) cin >> x[i][j];

  vector<int> s(m);
  rep(i, n) rep(j, m) { s[j] += x[i][j]; }

  rep(i, m) {
    if (s[i] < a[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
