#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  int ans = a + b;
  for (int i = 0; i < n; i++) {
    if (ans == c[i]) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}
