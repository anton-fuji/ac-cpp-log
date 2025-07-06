#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int sum = 0;
  rep(i, n) { sum += a[i]; }
  if (sum <= m) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
