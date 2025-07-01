#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int cnt = 0;
  rep(i, n) {
    if (a[i] < b[i]) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
