#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;

  int ans = round(n / 5.0) * 5;
  cout << ans << endl;

  return 0;
}
