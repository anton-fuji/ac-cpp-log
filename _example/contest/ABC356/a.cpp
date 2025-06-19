#include <algorithm>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);
  rep(i, n) a[i] = i + 1;
  reverse(a.begin() + (l - 1), a.begin() + r);
  rep(i, n) { cout << a[i] << ' '; }
  cout << endl;
  return 0;
}
