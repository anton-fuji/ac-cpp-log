#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> bk(n + 1, 0);
  rep(i, q) cin >> bk[i];

  rep(i, q) {
    if (i) {
      cout << " ";
    }

    int X;
    cin >> X;
    if (X >= 1) {
      bk[X]++;
      cout << X;
    } else {
      int y = 1;
    }
  }
  return 0;
