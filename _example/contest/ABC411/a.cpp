#include <iostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  string p;
  int l;
  cin >> p >> l;

  int n = p.length();
  if (n >= l) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
