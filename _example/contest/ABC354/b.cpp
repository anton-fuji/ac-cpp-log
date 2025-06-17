#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<string, int>> user(n);

  rep(i, n) { cin >> user[i].first >> user[i].second; }
  sort(user.begin(), user.end());
  int t = 0;
  rep(i, n) t += user[i].second;
  string ans = user[t % n].first;
  cout << ans << endl;
  return 0;
}
