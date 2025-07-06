#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> s(n);
  rep(i, n) cin >> s[i];

  set<string> uni;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        uni.emplace(s[i] + s[j]);
      }
    }
  }
  cout << size(uni) << endl;
  return 0;
}
