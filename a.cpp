#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int x = 10;
  cout << &x << endl;

  int *xPtr;
  xPtr = &x;

  cout << *xPtr << endl;
  cout << xPtr << endl;

  int y = 10;
  int *yPtr = &y;

  cout << *yPtr << endl;

  cout << *yPtr << endl;
}
