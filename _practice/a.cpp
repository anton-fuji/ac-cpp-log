#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  string ans;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0) {
      ans += "x";
    } else {
      ans += "o";
    }
  }
  cout << ans << endl;
  return 0;
}
