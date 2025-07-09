#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ull = unsigned long long;
int main() {
  ull a, b;
  cin >> a >> b;

  // 切り捨てでceilを使ってもいいが、できるだけ
  // 小数を扱わない方向で考える
  cout << (a + b - 1) / b << endl;
  return 0;
}
