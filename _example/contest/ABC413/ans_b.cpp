#include <iostream>
#include <iterator>
#include <set>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> S(N);
  // auto：範囲ベースforループ
  for (auto &&s : S)
    cin >> s;

  // setで連結後の文字列の重複を防ぐ
  set<string> ans;
  for (const auto &s : S)
    for (const auto &t : S)
      if (s != t)
        ans.emplace(s + t);

  cout << size(ans) << endl;
  return 0;
}
