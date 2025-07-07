#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

bool similar(char a, char b) {
  if (a == b)
    return true;
  if (a == '1' && b == 'l')
    return true;
  if (a == 'l' && b == '1')
    return true;
  if (a == '0' && b == 'o')
    return true;
  if (a == 'o' && b == '0')
    return true;
  return false;
}

int main() {
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;

  rep(i, n) {
    if (!similar(s[i], t[i])) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
