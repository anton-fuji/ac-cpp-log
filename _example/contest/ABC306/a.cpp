#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  rep(i, n) { cout << s[i] << s[i]; }
}
