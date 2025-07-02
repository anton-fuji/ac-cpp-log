#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;
  string t, a;
  cin >> t >> a;

  int cnt = 0;
  rep(i, n) {
    if (t[i] == 'o' && a[i] == 'o') {
      cnt++;
    }
  }

  if (cnt > 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
