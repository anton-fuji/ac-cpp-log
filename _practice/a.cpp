#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << -1 << endl;
    return 0;
  }

  int ans = a + b;
  cout << (6 - ans) << endl;
  return 0;
}
