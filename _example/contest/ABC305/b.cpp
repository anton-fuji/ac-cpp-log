#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ull = unsigned long long;

int main() {
  ull ans = 0;
  rep(i, 64) {
    ull a;
    cin >> a;
    ans += a * (1ull << i);
  }
  cout << ans << endl;
  return 0;
}
