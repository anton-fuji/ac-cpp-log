#include <cctype>
#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  bool res = true;
  int n = s.length();
  for (int i = 1; i < n; i++) {
    if (isupper(s[i])) {
      if (t.find(s[i - 1]) == string::npos) {
        res = false;
      }
    }
  }
  cout << (res ? "Yes" : "No") << endl;
  return 0;
}
