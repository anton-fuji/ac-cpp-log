#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  string s;
  cin >> s;

  bool exists[26] = {false};

  for (char c : s) {
    exists[c - 'a'] = true;
  }

  for (int i = 0; i < 26; i++) {
    if (!exists[i]) {
      cout << (char)('a' + i) << endl;
      break;
    }
  }
  return 0;
}
