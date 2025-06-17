#include <iostream>
#include <ostream>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;

int main() {
  int h;
  cin >> h;

  int day = 0, now = 0;
  while (now <= h) {
    now += 1 << day;
    day++;
  }
  cout << day << endl;
  return 0;
}
