#include <iostream>
#include <utility>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == b) {
    cout << -1 << endl;
  } else {
    if (a > b)
      swap(a, b);
    if (a == 1 && b == 2)
      cout << 3 << endl;
    if (a == 1 && b == 3)
      cout << 2 << endl;
    if (a == 2 && b == 3)
      cout << 1 << endl;
  }
  return 0;
}
