#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;
  string s(n, '-');

  if (n % 2 == 0) {
    s[n / 2 - 1] = '=';
    s[n / 2] = '=';
  } else {
    s[n / 2] = '=';
  }
  cout << s << endl;
  return 0;
}
