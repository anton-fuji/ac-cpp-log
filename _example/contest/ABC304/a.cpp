#include <algorithm>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> a(n);

  rep(i, n) cin >> s[i];
  rep(i, n) cin >> a[i];
  int min_a = 1e9;
  int si = 0;
  rep(i, n) if (a[i] < a[si]) si = i;
  rep(i, n) {
    int ni = (si + i) % n;
    cout << s[ni] << endl;
  }
  return 0;
}
