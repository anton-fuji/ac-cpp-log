#include <iostream>
#include <utility>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;

  if (x > y)
    swap(x, y);

  if (x < z && z < y)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
