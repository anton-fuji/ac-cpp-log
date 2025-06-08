#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int left = 0, right = n + 1;

  while (right - left > 1) {
    int mid = (left + right) / 2;

    int cnt = 0;
    rep(i, n) {
      if (a[i] >= mid)
        cnt++;
    }

    if (cnt >= mid) {
      left = mid;
    } else {
      right = mid;
    }
  }

  cout << left << endl;
  return 0;
}
