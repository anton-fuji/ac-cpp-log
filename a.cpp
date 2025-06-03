#include <iostream>

using namespace std;

int main() {
  int s, h, m, se;
  cin >> s;
  h = s / 3600;
  m = s % 3600 / 60;
  se = s % 60;
  cout << h << ":" << m << ":" << se << endl;
}
