#include <iostream>
#include <ostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int seat = k, ans = 1;
  rep(i, n) {
    if (seat < a[i]) {
      seat = k;
      ans++;
    }
    seat -= a[i];
  }
  cout << ans << endl;
  return 0;
}
